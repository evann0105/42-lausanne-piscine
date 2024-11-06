/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emegret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:23:23 by emegret           #+#    #+#             */
/*   Updated: 2024/08/23 13:57:20 by emegret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	stock_div;
	int	stock_mod;

	stock_div = *a / *b;
	stock_mod = *a % *b;
	*a = stock_div;
	*b = stock_mod;
}
/*
#include <stdio.h>
int main(void)
{
    int a;
    int b;

    a = 10;
    b = 4;

    ft_ultimate_div_mod(&a, &b);
    printf("%d, %d", a, b);

    return 0;
}*/
