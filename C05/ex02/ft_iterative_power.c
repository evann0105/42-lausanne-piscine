/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:39:53 by emgret            #+#    #+#             */
/*   Updated: 2024/09/02 13:53:00 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;

	resultat = nb;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while (power > 1)
	{
		resultat *= nb;
		power--;
	}
	return (resultat);
}
/*
#include <stdio.h>
int main(void)
{
	int nb;
	int power;

	nb = 0;
	power = 0;
	printf("%d\n", ft_iterative_power(nb, power));
}*/