/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:49:51 by trgoel            #+#    #+#             */
/*   Updated: 2024/09/01 20:19:59 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_points
{
	int	size;
	int	*col_up;
	int	*col_down;
	int	*row_left;
	int	*row_right;
	int	**default_map;
	int	**finished_tab;
}	t_pts;

t_pts	*__set_struct(t_pts *p);

void	ft_putchar(char c);
void	ft_putstr(int fd, char *str);
int		erroring(int fd, char *str);

char	**get_all_permutations(char *towers);

// INIT
t_pts	*__init_struct__(char *str);

// UTILS
char	*ft_strjoin(char *str, char c);
int		ft_strlen(char *str);
void	ft_strcat(char *dest, char *src);
void	ft_strcpy(char *dest, char *src);
void	print_map(int **map, int size);
int		**create_empty_tab(int size);
int		**copy_map(int **map, int size);
int		*copy_row(int *row, int size);
void	print_row(int *map, int size);

// CHECK
int		ft_check_row(t_pts *p, int **map, int y, int size);
int 	ft_check_col(t_pts *p, int **map, int x, int size);
int		ft_check_co(t_pts *p, int **map, int x, int y);
int		ft_check_upleft(t_pts *p, int **map, int x, int y);
int		check_row_for_doubles(int *map, t_pts *p);
int		ft_check_row2(t_pts *p, int *map, int x, int size);

// PERMUTATIONS
char	*get_sub_towers(char *towers, char current_tower);
int		factoriel(int n);
void	add_permutation(char **permutations, char *path, char *towers);

#endif
