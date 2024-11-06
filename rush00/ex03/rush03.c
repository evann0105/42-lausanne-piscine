/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emegret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:40:07 by emegret           #+#    #+#             */
/*   Updated: 2024/08/24 16:14:24 by emegret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_ln(int x)
{
	int		column;

	column = 2;
	ft_putchar('B');
	while (column < x)
	{
		ft_putchar(' ');
		column++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
}

void	ft_print_final_ln(int x)
{
	int		col;

	col = 2;
	ft_putchar('A');
	if (x == 1)
	{
		ft_putchar('\n');
	}
	while (col < x)
	{
		ft_putchar('B');
		col++;
	}
	if (x > 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	ft_final(int x, int y)
{
	int		line;

	line = 2;
	ft_print_final_ln(x);
	while (line < y)
	{
		ft_print_ln(x);
		ft_putchar('\n');
		line++;
	}
	if (y > 1)
	{
		ft_print_final_ln(x);
	}
}

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(1, "Souriez, la negativité n'est pas acceptée", 43);
	}
	else if (x == 0 || y == 0)
	{
		write (1, "veuillez entrer des valeurs supérieures à 0", 49);
	}
	else
	{
		ft_final(x, y);
	}
}
