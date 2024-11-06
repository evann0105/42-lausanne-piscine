/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:48:53 by pclerget          #+#    #+#             */
/*   Updated: 2024/09/08 15:22:25 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_check_args2(char **av)
{
	int	i;

	i = 0;
	if (av[1][0] == '-' || (av[1][0] == '0' && ft_strlen(av[1]) > 1)
		|| ft_strlen(av[1]) > 37)
	{
		write(1, "Error", 5);
		return (1);
	}
	while (av[1][i])
	{
		if (av[1][i] < '0' || av[1][0] > '9')
		{
			write(1, "Error", 5);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_check_args3(char **av)
{
	int	i;

	i = 0;
	if (av[2][0] == '-' || (av[2][0] == '0' && ft_strlen(av[2]) > 1)
		|| ft_strlen(av[2]) > 37)
	{
		write(1, "Error", 5);
		return (1);
	}
	while (av[2][i])
	{
		if (av[2][i] < '0' || av[2][0] > '9')
		{
			write(1, "Error", 5);
			return (1);
		}
		i++;
	}
	return (0);
}
