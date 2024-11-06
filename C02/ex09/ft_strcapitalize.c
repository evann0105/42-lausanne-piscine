/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:04:28 by emgret            #+#    #+#             */
/*   Updated: 2024/08/28 15:29:22 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (!capitalize && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') 
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			capitalize = 1;
		else
			capitalize = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "HELLO";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return 0;
}*/
