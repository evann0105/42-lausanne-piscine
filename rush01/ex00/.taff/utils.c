/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 00:58:36 by trgoel            #+#    #+#             */
/*   Updated: 2024/09/01 20:34:24 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"


t_pts	*__set_struct(t_pts *p)
{
	static t_pts	*ptr;
	if (p)
		ptr = p;
	return (ptr);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[i])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

char	*ft_strjoin(char *str, char c)
{
	int	i;
	char *new_str;

	new_str = malloc(sizeof(char) + (ft_strlen(str + 2)));
	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = c;
	new_str[i] = 0;
	return (new_str);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_row(int *map, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(map[i] + '0');
		if (i < size - 1)
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	print_map(int **map, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			ft_putchar(map[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int	**create_empty_tab(int size)
{
	int	i;
	int	j;
	int	**map;

	map = malloc(sizeof(int *) * size);
	if (!map)
		return (NULL);
	i = 0;
	while (i < size)
		map[i++] = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
			map[i][j++] = 0;
		i++;
	}
	return (map);
}

int	**copy_map(int **map, int size)
{
	int	i;
	int	j;
	int	**new_map;

	new_map = malloc(sizeof(int *) * size);
	if (!new_map)
		return (NULL);
	i = 0;
	while (i < size)
		new_map[i++] = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			new_map[i][j] = map[i][j];
			j++;
		}
		i++;
	}
	return (new_map);
}

int	*copy_row(int *row, int size)
{
	int	i;
	int	*new_row;

	new_row = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		new_row[i] = row[i];
		i++;
	}
	return (new_row);
}
