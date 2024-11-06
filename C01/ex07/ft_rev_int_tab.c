/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emegret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:17:09 by emegret           #+#    #+#             */
/*   Updated: 2024/08/26 09:02:15 by emegret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	min;
	int	max;
	int	temp;

	min = 0;
	max = size - 1;
	while (min < max)
	{
		temp = tab[min];
		tab[min] = tab[max];
		tab[max] = temp;
		min++;
		max--;
	}
}
/*
#include <stdio.h>
int main(void)
{
	int i;
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Avant inversion : ");
    i = 0;
    while (i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
    ft_rev_int_tab(arr, size);
    printf("\nAprès inversion : ");
    i = 0;
    while (i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
    return (0);
}
*/
