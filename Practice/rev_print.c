/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:53:01 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/18 21:11:47 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		int length = 0;
		while(argv[1][length])
			length++;
		char temp;
		while(i < length)
		{
			temp = argv[1][i];
			argv[1][i] = argv[1][length - 1];
			argv[1][length - 1] = temp;
			i++;
			length--;
		}
		int j = 0;
		while(argv[1][j])
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}`