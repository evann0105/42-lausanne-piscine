/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:20:54 by emgret            #+#    #+#             */
/*   Updated: 2024/09/02 13:50:47 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		resultat *= nb;
		nb--;
	}
	return (resultat);
}
/*
#include <stdio.h>
int main(void)
{
	int nb;
	int resultat;
	
	nb = 6;
	resultat = ft_iterative_factorial(nb);
	printf("%d", resultat);
	return (0);
}*/