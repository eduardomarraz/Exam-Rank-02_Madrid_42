/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:55:28 by eduamart          #+#    #+#             */
/*   Updated: 2024/11/21 17:02:35 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int x = 0;
	while (str[x])
	{
		x++;
	}
	return x;
	
}

// int main()
// {
// 	char *str = "aaa";
// 	printf("str= %d", ft_strlen(str));

	
// }