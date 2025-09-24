/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 19:39:34 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/22 19:55:26 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$ */

#include <stdio.h>
#include <unistd.h>


int ft_isspace(int c)
{
	if((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return 1;
	return 0;
}
int ft_atoi(char *str)
{
	int i = 0;
	int n = 1;
	int res = 0;

	while(ft_isspace(str[i]))
		i++;
	if(str[i] == '-')
	{
		n = -1;
		i++;
	}
	while(ft_isdigit(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return res *= n;
}

unsigned int f_hcm(unsigned int x, unsigned int y)
{
	int r;
	while(y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	return (x);
}

void ft_putnbr(int c)
{
	if (c > 9)
		ft_putnbr(c / 10);
	write(1, &"0123456789"[c % 10], 1);
}


int main (int argc, char **argv)
{
	if(argc == 3)
	{
		unsigned int a = ft_atoi(argv[1]);
		unsigned int b = ft_atoi(argv[2]);
		unsigned int result = f_hcm(a, b);
		ft_putnbr(result);
	}
	write(1, "\n", 1);
	return 0;
}