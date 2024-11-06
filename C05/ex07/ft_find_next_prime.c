/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:45:32 by emgret            #+#    #+#             */
/*   Updated: 2024/09/02 18:45:32 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 0;
	if (nb < 0)
		return (2);
	if (nb == 0 || nb == 1)
		return (2);
	while (i <= nb)
	{
		if (nb % i == 0)
			n++;
		if (n > 2)
		{
			nb++;
			i = 1;
			n = 0;
			continue ;
		}
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	int nb;

	nb = 6;
	printf("%d", ft_find_next_prime(nb));
	return (0);
}*/