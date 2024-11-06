/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __initValues__.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 00:22:52 by trgoel            #+#    #+#             */
/*   Updated: 2024/09/01 19:54:41 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "unistd.h"

int	is_numeric(char c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int check_args(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 1)
			if (str[i] != ' ')
				return(erroring(2, "Error: wrong format: no space"));
		if (i % 2 == 0)
			if (!is_numeric(str[i]))
				return(erroring(2, "Error: wrong format: not numeric"));
		i++;
	}
	return (0);
}

static int	__init_pts(t_pts *p, int size, char *str)
{
	p->col_up = malloc(sizeof(int) * size);
	p->col_down = malloc(sizeof(int) * size);
	p->row_left = malloc(sizeof(int) * size);
	p->row_right = malloc(sizeof(int) * size);

	p->col_up[0] = 4;
	p->col_up[1] = 3;
	p->col_up[2] = 2;
	p->col_up[3] = 1;
	
	p->col_down[0] = 1;
	p->col_down[1] = 2;
	p->col_down[2] = 2;
	p->col_down[3] = 2;
	
	p->row_left[0] = 4;
	p->row_left[1] = 3;
	p->row_left[2] = 2;
	p->row_left[3] = 1;
	
	p->row_right[0] = 1;
	p->row_right[1] = 2;
	p->row_right[2] = 2;
	p->row_right[3] = 2;
	check_args(str);
	return (0);
}

t_pts	*__init_struct__(char *str)
{
	t_pts	*p;

	p = malloc(sizeof(t_pts) * 1);
	if (!p)
		return (NULL);
	p->size = 4;
	__init_pts(p, p->size, str);
	__set_struct(p);
	return (p);
}
