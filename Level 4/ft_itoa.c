/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:58:38 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/24 18:12:32 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* 
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
 */

int get_size(int number)
{
	int size = 0;
	int rest;

	while(number > 0)
	{
		rest = number % 10;
		size++;
		number = number / 10;		
	}
	return size;
}

char itoa_digit(int c)
{
    return (char)((c % 10) + '0');
}

char *ft_itoa(int nbr)
{
	int size = get_size(nbr);
	printf("Size: %d\n", size);
	char *array = malloc(sizeof(int) * size);
	int i = 0;
	while(size - 1 >= 0)
	{
		array[size - 1] = itoa_digit(nbr);
		nbr = nbr / 10;
		size--;
	}
	return array;
}

int main ()
{
	int number = 54538;
	printf("%s", ft_itoa(number));
}