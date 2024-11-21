/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:07:49 by eduamart          #+#    #+#             */
/*   Updated: 2024/11/21 18:27:08 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <aio.h>


int     *ft_rrange(int start, int end)
{
    int size;
    int *array;
    int i = 0;

	if (end >= start)
        size = end - start + 1;
    else
        size = start - end + 1;

    array = malloc(sizeof(int) * size);

    while (i < size)
    {
        array[i] = end; // Llenar el array desde 'end' hacia 'start'.
        if (end > start)
            end--; // Disminuir si end > start.
        else
            end++; // Aumentar si end < start.
        i++;
    }
    return array;
}

// int main(void)
// {
//     int *array;
//     int start = -1, end = 2;
//     int size = (end >= start) ? (end - start + 1) : (start - end + 1);

//     array = ft_rrange(start, end);

//     if (array)
//     {
//         for (int i = 0; i < size; i++)
//             printf("%d ", array[i]);
//         printf("\n");

//         free(array); // Liberar memoria.
//     }

//     return 0;
// }