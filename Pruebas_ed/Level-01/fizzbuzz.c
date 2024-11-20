/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:23:38 by eduamart          #+#    #+#             */
/*   Updated: 2024/11/19 16:21:40 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
    char c;

    if (n > 9) 
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

void fizzbuzz(int a)
{
    if (a % 3 == 0 && a % 5 == 0)
        write(1, "fizzbuzz\n", 9);
    else if (a % 3 == 0)
        write(1, "fizz\n", 5);
    else if (a % 5 == 0)
        write(1, "buzz\n", 5);
    else{
		ft_putnbr(a);
		write(1, "\n", 1);
	}
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
