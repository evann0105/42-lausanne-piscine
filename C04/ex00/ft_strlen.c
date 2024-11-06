/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:21:49 by emgret            #+#    #+#             */
/*   Updated: 2024/08/29 11:31:56 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "je suis log";
	int result;
	
	result = ft_strlen(str);
	ft_strlen(str);
	printf("%d", result);
	return (0);
}*/