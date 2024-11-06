/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfaure <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:57:16 by lfaure            #+#    #+#             */
/*   Updated: 2024/09/01 20:07:03 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"


int	check_row_for_doubles(int *map, t_pts *p)
{
	int	i;
	unsigned char	set[256];

	i = 0;
	while (i < 256)
		set[i++] = 0;
	i = 0;
	while (i < p->size)
	{
		if (set[(unsigned char)map[i]] || map[i] == 0)
			return (1);
		else
			set[(unsigned char)map[i]] = 1;
		i++;
	}
	return (0);
}
int	ft_check_col(t_pts *p, int **map, int y, int size)
{
	int h; //highest seen
	int s; //number seen
	int x;

	s = 0;
	h = 0;
	x = 0;
	while(x < size)
	{
		if (map[x][y] > h)
		{
			h = map[x][y];
			s++;
		}
		x++;
	}
	if (p->row_left[y] != s)
		return (0);
	h = 0;
	s = 0;
	x -= 1;
	while(x-- >= 0)
	{
		if (map[x][y] > h)
		{
			h = map[x][y];
			s++;
		}
		x--;
	}
	if (p->row_right[y] != s)
		return(0);
	return(1);
}

int ft_check_row(t_pts *p, int **map, int x, int size)
{
	int h;
	int s;
	int y;

	s = 0;
	h = 0;
	y = 0;
	while(y < size)
	{
		if (map[x][y] > h)
		{
			h = map[x][y];
			s++;
		}
		y++;
	}
	if (p->col_up[x] != s)
		return (0);
	h = 0;
	s = 0;
	y -= 1;
	while (y >= 0)
	{
		if (map[x][y] > h)
		{
			h = map[x][y];
			s++;
		}
		y--;
	}
	if (p->col_down[x] != s)
		return (0);
	return (1);
}

int ft_check_co(t_pts *p, int **map, int x, int y)
{
	int size;

	size = p->size;
	if (ft_check_row(p, map, x, size) == 1 && ft_check_col(p, map, y, size) == 1)
		return (1);
	else
		return (0);
}

int	ft_check_upleft(t_pts *p, int **map, int x, int y)
{
	int h;
	int s;
	int i;
	int j;

	h = 0;
	s = 0;
	i = 0;
	j = y;
	while(i < p->size)
	{
		if (map[j][i] > h)
		{
			h = map[j][i];
			s++;
		}
		i++;
	}
	if (p->row_right[j] != s)
		return(0);
	h = 0;
	s = 0;
	i = x;
	j = 0;
	while (j < p->size)
	{
		if (map[j][i] > h)
		{
			h = map[j][i];
			s++;
		}
		j++;
	}
	if (p->col_down[i] != s)
		return (0);
	return (1);

}
