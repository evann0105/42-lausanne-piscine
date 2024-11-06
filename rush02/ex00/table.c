/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsurian <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:16:48 by jsurian           #+#    #+#             */
/*   Updated: 2024/09/08 20:43:15 by pclerget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**init_table(char *entry, char **output)
{
	(void)entry;
	output[1][0] = '4';
	output[1][1] = '0';
	output[1][2] = '\0';
	output[0][0] = '2';
	output[0][1] = '\0';
	output[2][0] = '\0';
	return (output);
}

/*
char	**init_table(char *entry, char **output)
{
	int	i;
	int	j;
	int modulo;
	int	nb_zero;
	int leng;

	leng = ft_strlen(entry);

	leng = leng - 1;
	i = 0;
	j = 0;
	modulo = 0;
	nb_zero = 4;
	while (leng >= 0)
	{
		if (modulo % 3 == 2)  //100
		{
			output[j][i] = '1';
			i++;
			output[j][i] = '0';
			i++;
			output[j][i] = '0';
			i++;
			output[j][i] = '\0';
			i = 0;
			j++;

			output[j][i] = entry[leng];
			i++;
			output[j][i] = '\0';
			i = 0;
			j++;
			modulo++;
		}
		else if (modulo % 3 == 1)	//010
		{
			output[j][i] = entry[leng];
			i++;
			output[j][i] = '0';
			i++;
			output[j][i] = '\0';
			i = 0;
			j++;
			modulo++;
		}
		else if (modulo % 3 == 0) //001
		{
			if (j == 0 || j % 5 == 0)
			{
				output[j][i] = entry[leng];
				i++;
				output[j][i] = '\0';
				i = 0;
				modulo++;
			}
			else
			{
				output[j][i] = '1';
				i++;
				while (nb_zero > i)
				{
					output[j][i] = '0';
					i++;
				}
				nb_zero = nb_zero + 3;
				output[j][i] = '\0';
				i = 0;
				leng++;
			}
			j++;
		}
		else
			i++;
		leng--;
	}
	output[j][0] = '\0';
	return (output);
}
*/
