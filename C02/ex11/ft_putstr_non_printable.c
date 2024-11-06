/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:27:32 by emgret            #+#    #+#             */
/*   Updated: 2024/08/27 15:44:19 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[3];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			hex[0] = "0123456789abcdef"[(unsigned char)str[i] / 16];
			hex[1] = "0123456789abcdef"[(unsigned char)str[i] % 16];
			hex[2] = '\0';
			write(1, hex, 2);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
    char str[] = "Hello world	New line";
    ft_putstr_non_printable(str);
    return 0;
}*/
