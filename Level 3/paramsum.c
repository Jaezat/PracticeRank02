/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 19:27:32 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/22 19:38:41 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* 
Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$> */
//lol y que pasa si hay mas de > 9 arguments? menos mal que practique esto pq sino iba a esta las tres horas en este ejercicio no mames

void ft_putnbr(int c)
{
	if (c > 9)
		ft_putnbr(c / 10);
	write(1, &"0123456789"[c % 10], 1);
}

int main(int argc, char **argv)
{
	if (argc > 1)
		ft_putnbr(argc - 1);
	else
	{
		char c = 0 + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return 1;
}