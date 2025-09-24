/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_power2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:04:46 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/18 17:34:20 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* 
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
 */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	printf("n antes: %d\n", n);
	n = n / 2;
	printf("n dsp: %d\n", n);

	if(n == 1)
		return (1);
	else
		return (is_power_of_2(n));

	// return (0);
}

int main ()
{
	unsigned int number = 8;
	unsigned int limit = 1;
/* 	if(is_power_of_2(number) == limit)
		printf("The number is power of 2\n");
	else
		printf("It is not"); */

	printf("Output: %d\n", is_power_of_2(number));
	return 0;
}