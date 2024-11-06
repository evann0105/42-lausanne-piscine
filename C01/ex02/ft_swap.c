/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emegret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:35:30 by emegret           #+#    #+#             */
/*   Updated: 2024/08/23 12:53:11 by emegret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main(void)
{
    int nb1 = 45;
    int nb2 = 42;
	
	printf("%d", nb1);
	printf("%d", nb2);
	ft_swap(&nb1, &nb2);
	printf("%d", nb1);
	printf("%d", nb2);
    return 0;
}*/
