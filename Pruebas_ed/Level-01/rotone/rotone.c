/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:09:43 by eduamart          #+#    #+#             */
/*   Updated: 2024/11/20 17:16:38 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int i = 0;
	char c = str[i] + 1;
	while (str[i]) 
	{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i] == 'z')
					write(1, "a", 1); 
				else
				{
					char c = str[i] + 1;
					write(1, &c, 1);
				}
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				if (str[i] == 'Z')
					write(1, "A", 1);
				else
				{
					char c = str[i] + 1;
					write(1, &c, 1);
				}
			}
			else
				write(1, &str[i], 1);
			i++;
	}
write(1, "\n", 1);	
}
int	main(int args, char **argv)
{
	if(args != 2)
	{
		write(1, "\n", 1);
		return 0;		
	}
	rotone(argv[1]);	
}