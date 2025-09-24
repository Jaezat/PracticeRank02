/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:33:10 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/15 16:57:18 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz

 */
/* #include <stdio.h>
#include <unistd.h>

int main (void)
{
	int numbers[100];
 	int i = 0;
	while(i < 100)
	{
		numbers[i] = i + 1;
		i++;
	}
	i = 0;
	while(i < 100)
	{
		if ((numbers[i] % 5 == 0) && (numbers[i] % 3 == 0))
		{
			printf("Fizzbuzz\n");
			i++;
		}
		if (numbers[i] % 3 == 0)
		{
			printf("fizz\n");
			i++;
		}
		if (numbers[i] % 5 == 0)
		{
			printf("buzz\n");
			i++;
		}
		else
		{
			printf("%d\n", numbers[i]);
			i++;
		}
	}
}
 */

/* Correccion: */

#include <unistd.h>

void ft_putnbr(int num)
{
	if (num > 9)
		ft_putnbr(num / 10);
	
	write(1, &"123456789"[num % 10], 1);
}


int main(void)
{
    int i;
    
    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if  (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_putnbr(i);
        i++;
        write(1, "\n", 1);
    }
}