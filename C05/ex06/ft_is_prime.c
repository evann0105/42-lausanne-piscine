/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:29:43 by emgret            #+#    #+#             */
/*   Updated: 2024/09/03 13:17:46 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;
	int	i;

	n = 0;
	i = 1;
	if (nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			n++;
		i++;
	}
	if (n == 2)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int nb;

	nb = 5;
	printf("%d", ft_is_prime(nb));
	return (0);
}*/