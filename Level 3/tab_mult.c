/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:45:21 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/22 22:04:25 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>
 */

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

unsigned int ft_atoi(char *str)
{
	int i = 0;
	unsigned int n = 1;
	unsigned int res = 0;
	while(ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
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
	return res * n;
	
}

void ft_putnbr(unsigned int c)
{
	if(c > 9)
		ft_putnbr(c / 10);
	write(1, &"0123456789"[c % 10], 1);
}

void tam_mult(unsigned int num)
{
	int i = 1;
	int res;
	int limit = 9;
	while (i <= limit)
	{
		res = i * num;
		ft_putnbr(i);
		write(1," x ", 3);
		ft_putnbr(num);
		write(1, " = ", 3);
		ft_putnbr(res);
		write(1, "\n", 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		unsigned int num = ft_atoi(argv[1]);
		tam_mult(num);
	}
	write(1, "\n", 1);
	return 0;
}