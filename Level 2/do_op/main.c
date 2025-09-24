/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:35:24 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/17 19:23:42 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int main (int argc, char **argv)
{
		// printf("Here1");
	if (argc == 4)
	{
		int i = 0;
		char *first_number = argv[1];
		char *second_number = argv[3];
		char *opt = argv[2];
		
		int result = do_op(first_number, second_number, opt);
		printf("%i", result);
	}
	printf("\n");
}