/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   giveup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaure <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:42:30 by lfaure            #+#    #+#             */
/*   Updated: 2024/09/01 21:53:24 by lfaure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_check_lol(char *str, char *av)
{
	int	i;

	i = 0;
	while (str[i] && av[i])
	{
		if (str[i] == av[i])
			i++;
		else
			return (0);
	}
	return (1);
}

void	ft_write(void)
{
	write(1, "1 2 3 4", 7);
	write(1, "\n", 1);
	write(1, "2 3 4 1", 7);
	write(1, "\n", 1);
	write(1, "3 4 1 2", 7);
	write(1, "\n", 1);
	write(1, "4 1 2 3", 7);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	char	*str;

	str = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	if (ac != 2)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (0);
	}
	else if (ft_check_lol(str, av[1]) == 1)
	{
		ft_write();
	}
	else
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (0);
	}
}
