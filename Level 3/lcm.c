/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:16:16 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/22 19:27:04 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* 
Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function who takes two unsigned int as parameters and returns the
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common
multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and
calculate as follows:

	LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

  unsigned int    lcm(unsigned int a, unsigned int b);
 */

#include <unistd.h>
#include <stdio.h>


unsigned int ft_hcm(unsigned int x, unsigned int y)
{
	int r;
	while(y != 0)
	{
		// printf("x: %d\n", x);
		// printf("y: %d\n", y);
		r = x % y;
		// printf("r: %d\n", y);
		x = y;
		y = r;	
	}
	return (x);
}

unsigned int ft_lcm(unsigned int a, unsigned int b)
{
	if (a == NULL || b == NULL)
		return 0;
	unsigned int x = a;
	unsigned int y = b;
	unsigned int hcm = ft_hcm(a, b);
	unsigned int result = (a * b) / hcm;
	return result;
}
int main ()
{
	unsigned int a = 45;
	unsigned int b = 210;
	unsigned int result = ft_lcm(a, b);
	printf("result: %d\n", result);
}