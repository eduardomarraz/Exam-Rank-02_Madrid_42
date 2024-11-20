/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:01:40 by eduamart          #+#    #+#             */
/*   Updated: 2024/11/18 18:06:00 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int 	ft_len(char *str)
{
	int i = 0;
	while(str[i])
	i++;
return i;
}

void	expand_str(char *str)
{
	int i = 0;
	int len = ft_len(str) - 1;
	int cont = 0;
	while(len >= 0 && str[len] == ' ' || str[len] == '\t')
		len--;
	while(str[i] == ' ' || str[i] == '\t')
	{
		i++;		
	}
	while (i <= len)
    {
        // Imprimir un carácter de la palabra
        if (str[i] != ' ' && str[i] != '\t')
        {
            write(1, &str[i], 1);
        }
        else
        {
            // Detectar inicio de espacios entre palabras
            write(1, "   ", 3); // Tres espacios
            // Saltar todos los espacios consecutivos
            while (i <= len && (str[i] == ' ' || str[i] == '\t'))
                i++;
            continue; // Reanudar el bucle para imprimir la siguiente palabra
        }
        i++;
    }

    write(1, "\n", 1); // Nueva línea al final
}

int 	main(int args, char **argv)
{
	if(args != 2){
		write(1, "\n", 1);
		return 0;
	}
	expand_str(argv[1]);
	return 0;	
}