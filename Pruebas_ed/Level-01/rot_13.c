/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:21:01 by eduamart          #+#    #+#             */
/*   Updated: 2024/11/14 14:00:57 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print(char *a)
{
	int cont = 0;
	while (a[cont])
	{
		write(1, &a[cont], 1);
		cont++;
	}
	return cont;
}

void	rot_13(char *a)
{
	int i = 0;
	int cont = 0;
	
	while (a[i] != '\0')
	{
		if(a[i]>=65 && a[i]<=77)
			a[i] = a[i]+13;
		else if(a[i]>=78 && a[i]<=90)
			a[i] = a[i]-13;
		else if(a[i]>=97 && a[i]<=110)
			a[i] = a[i]+13;
		else if(a[i]>=110 && a[i]<=122)
			a[i] = a[i]-13;
		i++;
	}
	ft_print(a);
	
}

int	main(int argc, char **argv)
{
	//char argv[]= "abcdefghijklmopqrstuvwxyz NMLKZzp";

	if (argc != 2) // Si no hay exactamente 1 argumento
	{
		write(1, "\n", 1); // Mostrar salto de línea
		return 0;
	}
	rot_13(argv[1]); // Procesar el argumento con ROT13
	write(1, "\n", 1); // Agregar un salto de línea al final
	return 0;
}
