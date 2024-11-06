/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:26:08 by emgret            #+#    #+#             */
/*   Updated: 2024/09/02 15:28:25 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	racine;

	racine = 1;
	while (racine * racine != nb)
	{
		if (racine * racine > nb)
			return (0);
		racine++;
	}
	return (racine);
}
/*
#include <stdio.h>
int main(void)
{
	int nb = 81;

	printf("%d\n", ft_sqrt(nb));
	return (0);
}*/