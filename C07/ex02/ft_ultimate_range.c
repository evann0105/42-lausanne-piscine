/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:24:36 by emgret            #+#    #+#             */
/*   Updated: 2024/09/11 10:43:44 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	*range = malloc(sizeof(int) * length);
	if (*range == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (length);
}
/*
#include <stdio.h>
int	main(void)
{
	int *range;
	int length;

	length = ft_ultimate_range(&range, 5, 10);
	if (length == 0)
	{
		printf("range est vide ou l'alloc a fail.\n");
		return (1);
	}
	printf("longueur de range : %d\n", length);
	printf("\n");
	free(range);
	return (0);
}*/