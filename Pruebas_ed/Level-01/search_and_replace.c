/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:31:11 by eduamart          #+#    #+#             */
/*   Updated: 2024/11/14 16:10:39 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	lenght(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	
	

	
}

void	search_and_replace(char *str, char *str2, char *str3)
{
	int i = 0;
	int lenght = 0;

	while(str[i] != '\0')
	{
	lenght++;
	i++;
	}
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == str2[0])
		{
			str[i] = str3[0];			
		}
		if (str[i] != str2[0] && i == lenght)
		{
			printf("%s\n", str);
			return ;
		}
		i++;
	}
	printf("%s", str);
}
int	main(int args, char **argv)
{
	if(args != 4)
	return (write(1,"\n", 1));

	search_and_replace(argv[1], argv[2], argv[3]);

	return 0;
}