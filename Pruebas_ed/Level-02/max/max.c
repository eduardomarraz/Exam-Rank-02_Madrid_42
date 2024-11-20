/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:02:57 by eduamart          #+#    #+#             */
/*   Updated: 2024/11/18 16:55:45 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i = 0;
	int result = INT_MIN;
	while(i <= len)
	{
		if(result < tab[i])
		{
			result = tab[i];
		}
	i++;		
	}
	return result;
}

// int 	main()
// {
// 	int y = 5;
// 	int x[] = {1, 2, 3, -4, 9, 77};
// 	printf("max= %d",max(x, y));
// 	return 0;	
// }