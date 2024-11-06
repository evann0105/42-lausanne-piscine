/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclerget <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:58:26 by pclerget          #+#    #+#             */
/*   Updated: 2024/09/08 17:34:58 by pclerget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Fichiers comportant quelques fonctions utiles*/

#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_y(char **tab)
{
	int	y;

	y = 0;
	while (tab[y][0])
		y++;
	return (y);
}
