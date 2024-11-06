/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emegret <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:56:49 by emegret           #+#    #+#             */
/*   Updated: 2024/08/24 10:16:40 by emegret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	max;

	max = 0;
	while (str[max] != '\0')
	{
		max++;
	}
	return (max);
}
/*
#include <stdio.h>
int main(void)
{
    char *str;
    int len;

    str = "hello";
    len = ft_strlen(str);
    printf("%d", len);

}*/
