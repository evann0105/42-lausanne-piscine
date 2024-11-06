/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:47:12 by trgoel            #+#    #+#             */
/*   Updated: 2024/09/01 20:20:59 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	t_pts	*p;
	char	**test;
	
	if (argc != 2)
		return (erroring(2, "Error: not enough or too many arguments"));
	p = __init_struct__(argv[1]);
	p->default_map = create_empty_tab(p->size);
	test = get_all_permutations("1234");
	printf("%s\n", test[0]);
	printf("%s\n", test[1]);
	printf("%s\n", test[2]);
	printf("%s\n", test[3]);
	printf("%s\n", test[4]);
	return (0);
}
