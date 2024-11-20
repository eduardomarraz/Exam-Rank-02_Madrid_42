/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:16:41 by eduamart          #+#    #+#             */
/*   Updated: 2024/11/15 17:32:48 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_lenght(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	i++;
	return i;
}

void	last_word(char *str)
{
	int i = 0;
	int lenght = ft_lenght(str) - 1;
	
	i = lenght;
	while((str[lenght] == ' ' || str[lenght] == '	'))
		lenght--;
	while(str[lenght ] > 0 )
	{
		if(str[lenght] == ' ' || str[lenght] == '	')
		{
			lenght++;
			while(lenght <= i)
			{
				if(str[lenght] == ' ' || str[lenght] == '	')
				{
					write(1, "\n", 1);
					return ;
				}
				write(1, &str[lenght], 1);
				lenght++;
			}
			write(1, "\n", 1);
			return ;
		}
	lenght--;
	}		
}

int	main(int args, char *argv[])
{
	if(args != 2){
	write(1, "\n", 1);
	return 0;
	}

	last_word(argv[1]);
	return 0;
}