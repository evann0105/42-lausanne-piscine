/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:39:28 by emgret            #+#    #+#             */
/*   Updated: 2024/09/11 15:20:08 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
 	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		return (0);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char *src = "hello word !";
	char *copie = ft_strdup(src);

	if (copie == NULL)
	{
		printf("Erreur d'allocation mémoire.\n");
		return 1;
	}
	printf("Chaîne copiée : %s\n", copie);
	free(copie);
	return 0;
}