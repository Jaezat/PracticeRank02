/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:12:19 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/21 14:23:58 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

//So un numero prime es un numero que solo se dividi entre el mismo y 1
// La pregunta es, como uno puede saber si se puede dividir por otros numeros?


#include <stdio.h>
#include <unistd.h>

int ft_isspace(int c)
{
	if((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}

int ft_isnumber(int c)
{
	if(c >= '0' && c <= '9')
		return 1;
	return 0;
}
int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int n = 1;

	while(ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while(ft_isnumber(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return res *= n;
}

int add_prime_sum(int num)
{
	int i = 2;
	int sum = 0;
	int res;
	int j = 2;
	if (num <= 1)
	{
		printf("Not prime\n");
		return 1;
	}
	else
		while(j <= num)
		{	
			int isPrime = 1;
			int i = 2;
			while(i < j)
			{
				if(j % i == 0)
				{
					isPrime = 0;
					break;
				}
				i++;
			}
			if (isPrime)
				sum += j;
			j++;
		}
	return sum;
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i =0;
		// printf("Argv[1]: %c", argv[1][i]);
		int num = ft_atoi(argv[1]);
		// printf("Num after atoi: %d\n", num);
		int result = add_prime_sum(num);
		printf("Result: %d\n", result);
	}
	return 0;
}

