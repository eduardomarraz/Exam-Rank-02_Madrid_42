/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:52:03 by eduamart          #+#    #+#             */
/*   Updated: 2024/11/19 18:32:50 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign = 1;
	int	result = 0;
	
	if (*str == '-')
	{
		sign = -1;
		str++;	// por el signo -, por eso suma
	}

	while (*str)
	{
		result *= str_base;
		if (*str >= '0' && *str <= '9')
			result += (*str - '0');
		else if (*str >= 'a' && *str <= 'f')
			result += (*str - 'a' + 10);
		else if (*str >= 'A' && *str <= 'F')
			result += (*str - 'A' + 10);
		str++;
	}

	return (result * sign);
}

// int main()
// {
// 	// Pruebas con diferentes bases
// 	printf("Base 10 (123): %d\n", ft_atoi_base("123", 10));  // 123 en base 10
// 	printf("Base 2 (1011): %d\n", ft_atoi_base("1011", 2));  // 11 en base 10
// 	printf("Base 16 (1f4): %d\n", ft_atoi_base("1f4", 16));  // 500 en base 10
// 	printf("Base 8 (17): %d\n", ft_atoi_base("17", 8));  // 15 en base 10

// 	return 0;
// }
