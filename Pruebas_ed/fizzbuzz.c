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

void fizzbuzz(int a)
{
    if (a % 3 == 0 && a % 5 == 0)
        printf("fizzbuzz\n");
    else if (a % 3 == 0)
        printf("fizz\n");
    else if (a % 5 == 0)
        printf("buzz\n");
    else
        printf("%d\n", a);
}

int	main()
{
    int i = 0;
    while(i<101){
    
	fizzbuzz(i);
    i++;
    }
	return 0;
}
