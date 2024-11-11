/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:23:38 by eduamart          #+#    #+#             */
/*   Updated: 2024/11/11 15:36:20 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	fizzbuzz(int a)
{
	if(a%3 && a%5)
		printf("fizzbuzz");
	else{

	if(a%3)
		printf("fizz");
	if(a%5)
		printf("buzz");
	}



}

int	main()
{
	fizzbuzz(50);


	return 0;
}
