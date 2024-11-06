/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:03:06 by pclerget          #+#    #+#             */
/*   Updated: 2024/09/08 19:46:52 by pclerget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>	/*Lib write/read*/
# include <stdlib.h> /*Lib malloc*/
# include <fcntl.h> /*Lib open/close*/

typedef struct s_param_tab /*Structure des parametres de tab*/
{
	int	j;
	int	i;
	int	modulo;
	int	leng;
}	t_param_tab;

/*Fonctions dans ft_utile*/
void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_strlen_y(char **tab);

/*Fonctions dans read_write_dico*/
void	putstr_key(char *dico, int started, int i);
void	ft_find_key(char *dico, char *to_find);
void	write_keys_in_tab(char *dico, char **tab, int elements);
void	execute_dico(char *pathname, char **tab, int elements);

/*fonctions dans ft_check_args*/
int		ft_check_args2(char **av);
int		ft_check_args3(char **av);

/*fonctions dans malltab*/
char	**malltab(char *entry);

/*fonctions dans table*/
char	**init_table(char *entry, char **output);

#endif
