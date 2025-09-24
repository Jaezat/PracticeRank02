/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 20:10:48 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/23 10:20:44 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$ */

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

void ft_putnbr_base(int c)
{
	if(c >= 16)
		ft_putnbr_base(c / 16);
	write(1, &"0123456789abcdef"[c % 16], 1);
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		write(1, "0x", 2);
		ft_putnbr_base(num);
	}
	write(1, "\n", 1);
	return 0;
}