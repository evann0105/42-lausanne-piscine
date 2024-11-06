/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_all_permutations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:55:36 by trgoel            #+#    #+#             */
/*   Updated: 2024/09/01 20:36:19 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	**get_all_permutations(char *towers)
{
	char	**permutations;
	int		towers_len;
	int		nb_permutations;
	int		index_permutation;
	char	*path;

	towers_len = ft_strlen(towers);
	nb_permutations = factoriel(towers_len);
	permutations = malloc(sizeof(char *) * (nb_permutations + 1));
	path = malloc(sizeof(char) * (towers_len + 1));
	path[0] = 0;
	index_permutation = 0;
	while (index_permutation < nb_permutations)
	{
		permutations[index_permutation] = malloc(sizeof(char) * towers_len);
		permutations[index_permutation][0] = '\0';
		index_permutation++;
	}
	permutations[index_permutation] = NULL;
	add_permutation(permutations, path, towers);
	free(path);
	return (permutations);
}

void	add_permutation(char **permutations, char *path, char *towers)
{
	char	*sub_towers;
	char	*sub_path;
	int		towers_len;
	int		i;
	int		index_permutation;

	towers_len = ft_strlen(towers);
	i = 0;
	index_permutation = 0;
	if (towers_len == 1)
	{
		sub_path = ft_strjoin(path, *towers);
		while (permutations[index_permutation][0])
			index_permutation++;
		ft_strcpy(permutations[index_permutation], sub_path);
		return ;
	}
	while (towers[i])
	{
		sub_towers = get_sub_towers(towers, towers[i]);
		sub_path = ft_strjoin(path, towers[i]);
		add_permutation(permutations, sub_path, sub_towers);
		i++;
	}
}

char	*get_sub_towers(char *towers, char current_tower)
{
	char	*sub_towers;
	int		i;

	sub_towers = malloc(sizeof sub_towers * ft_strlen(towers));
	i = 0;
	while (*towers)
	{
		if (*towers != current_tower)
		{
			sub_towers[i] = *towers;
			i++;
		}
		towers++;
	}
	sub_towers[i] = '\0';
	return (sub_towers);
}
