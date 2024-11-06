/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:51:50 by emgret            #+#    #+#             */
/*   Updated: 2024/08/27 14:19:09 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>

int	main(void)
{
    char src[] = "1234567";
    char dest[] = "bonjour";
	unsigned int n = 6;
	int result;
	
	printf("src = %s\n", src);
    ft_strlcpy(dest, src, n);
    printf("Destination : %s\n", dest);
	result = ft_strlcpy(dest, src, n);
	printf("%d", result);

    return 0;
}*/