/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 00:43:15 by trgoel            #+#    #+#             */
/*   Updated: 2024/09/01 19:52:54 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	h(int **map, int x, int incr, int size)
{
	int	j;

	j = 0;
	if (incr == 1)
		while (j < size)
		{
			map[x][j] = j + 1;
			j++;
		}
	else if (incr == 0)
		while (j < size)
		{
			map[j][x] = j + 1;
			j++;
		}
}

void	free_tab(int **map, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (map[i])
		{
			free(map[i]);
			map[i] = NULL;
		}
		i++;
	}

	free(map);
	map = NULL;
}
	//TODO;
	// FIND A GOOD BACKTRACKING ALGORITHM
	// MON IDEE;
		// creer une map qui test une valeur et qui l'envoie dans la fonction
		// elle meme jusqu'a trouver un bon chemin.
		// qui se ferai ecrire dans la structure de base
void	check_zeros(int **map, int size)
{
	int	i;
	int	j;
	int	is_printable;

	i = 0;
	is_printable = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (map[i][j] != 0)
				is_printable += 1;
			j++;
		}
		i++;
	}
	if ((is_printable - 1) % size == 0)
		print_map(map, size);
}

