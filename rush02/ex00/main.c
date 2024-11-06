/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclerget <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:57:34 by pclerget          #+#    #+#             */
/*   Updated: 2024/09/08 20:45:05 by pclerget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int ac, char **av)
{
	char	**tab;

	if (ac == 2)
	{
		if (ft_check_args2(av) == 0)
		{
			tab = malltab(av[1]);
			tab = init_table(av[1], tab);
			execute_dico("./numbers.dict", tab, ft_strlen_y(tab));
		}
	}
	else if (ac == 3)
	{
		if (ft_check_args3(av) == 0)
		{
			tab = malltab(av[2]);
			tab = init_table(av[2], tab);
			execute_dico(av[1], tab, ft_strlen_y(tab));
		}
	}
	else
		write(1, "Error", 5);
	ft_putchar('\n');
}
