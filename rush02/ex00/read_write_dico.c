/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_write_dico.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclerget <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:06:16 by pclerget          #+#    #+#             */
/*   Updated: 2024/09/08 16:50:39 by pclerget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Fichier permettant d'ouvrir le dico voulu et de venir imprimer les  cles*/

#include "rush.h"

void	putstr_key(char *dico, int started, int i)
{
	while (1)
	{
		if (started == 0 && dico[i] >= 'a' && dico[i] <= 'z')
			started = 1;
		else if (started == 1 && (dico[i] < 'a' || dico[i] > 'z'))
			return ;
		if (started == 1)
			ft_putchar(dico[i]);
		i++;
	}
}

void	ft_find_key(char *dico, char *to_find)
{
	int	i;
	int	find_len;
	int	find_act;
	int	started;

	i = 0;
	started = 0;
	find_len = ft_strlen(to_find);
	find_act = 0;
	while (dico[i] != '\0')
	{
		if (find_len == 0)
			return ;
		else if (dico[i] == to_find[find_act])
			find_act++;
		else
			find_act = 0;
		if (find_act == find_len)
		{
			putstr_key(dico, started, i);
			return ;
		}
		i++;
	}
}

void	write_keys_in_tab(char *dico, char **tab, int elements)
{
	int	y;	

	y = elements - 1;
	while (y >= 0)
	{
		ft_find_key(dico, tab[y]);
		if (y != 0)
			write(1, " ", 1);
		y--;
	}
}

void	execute_dico(char *pathname, char **tab, int elements)
{
	int		open_ret;
	int		len_readed;
	char	buffer[1024];
	char	*ptr;

	open_ret = open(pathname, O_RDONLY);
	if (open_ret == -1)
	{
		write(1, "Dict Error", 10);
		return ;
	}
	len_readed = read(open_ret, buffer, sizeof (buffer) + 1);
	if ((unsigned long)len_readed > sizeof (buffer) || len_readed < 0)
	{
		write(1, "Dict Error", 10);
		return ;
	}
	if (close(open_ret) == -1)
	{
		write(1, "Dict Error", 10);
		return ;
	}
	ptr = &buffer[0];
	write_keys_in_tab(ptr, tab, elements);
}

/*
int	main(int ac, char **av)
{
	char *tab[atoi(av[2])];
	int i;

	if (ac > 3)
	{	
		i = 0;
		while (i < atoi(av[2]))
		{
			tab[i] = av[i + 3];
			i++;
		}
		execute_dico(av[1], tab, atoi(av[2]));
	}
}*/
