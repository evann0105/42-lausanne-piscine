/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malltab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:31:14 by jsurian           #+#    #+#             */
/*   Updated: 2024/09/08 17:16:16 by pclerget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**malltab(char *entry)
{
	int		leng;
	int		i;
	char	**output;

	leng = 0;
	i = 0;
	while (entry[leng] != '\0')
		leng++;
	output = malloc(sizeof(char *) * leng * 2);
	if (output == NULL)
		return (NULL);
	while (i < leng * 2)
	{
		output[i] = malloc(sizeof(char) * leng * 2);
		if (output[i] == NULL)
			return (NULL);
		i++;
	}
	return (output);
}
