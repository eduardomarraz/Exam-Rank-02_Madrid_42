/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:03:31 by eduamart          #+#    #+#             */
/*   Updated: 2024/11/21 18:06:48 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_alpha_mirror(char *str)
{
	int x = 0;
	char y;
	while(str[x])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			y = 'z' - (str[x] - 'a');
			write(1, &y, 1);
		}
		else if (str[x] >= 'A' && str[x] <= 'Z')
		{
			y = 'Z' - (str[x] - 'A');
			write(1, &y, 1);
		}
		else
			write(1, &str[x], 1);
	x++;
	}
	write(1, "\n", 1);
	return x;
}

int main(int args, char **argv)
{
	if(args != 2){
		write(1, "\n", 1);
		return 0;
	}
	ft_alpha_mirror(argv[1]);

	return 0;
}