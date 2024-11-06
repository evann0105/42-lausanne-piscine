/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:09:12 by emgret            #+#    #+#             */
/*   Updated: 2024/08/26 09:23:31 by emegret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	pos;
	int	change;

	change = 1;
	while (change)
	{
		change = 0;
		pos = 0;
		while (pos < size - 1)
		{
			if (tab[pos] > tab[pos + 1])
			{
				temp = tab[pos];
				tab[pos] = tab[pos + 1];
				tab[pos + 1] = temp;
				change = 1;
			}
			pos++;
		}
	}
}
/*
#include <stdio.h>
int main(void)
{
	int i;
	int arr[] = {0, 9, 2, 3, 4, 6, 8, 7, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Avant mise en ordre : ");
    i = 0;
    while (i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
    ft_sort_int_tab(arr, size);
    printf("\nAprès mise en ordre : ");
    i = 0;
    while (i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
    return (0);
}*/
