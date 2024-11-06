/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emegret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:57:42 by emegret           #+#    #+#             */
/*   Updated: 2024/08/23 14:01:08 by emegret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main(void)
{
    int a = 50;
    int b = 4;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);
    printf("%d, %d", div, mod);

	return 0;
}*/
