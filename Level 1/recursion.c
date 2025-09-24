/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:42:13 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/15 16:47:49 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 1. Factorial

Problem: Compute the factorial of a number n.
Recursion idea: n! = n * (n-1)!

Base case: factorial(0) = 1

Example: factorial(5) → 120 */


#include <stdio.h>

void factorial(int i)
{
	if(i > 0)
		factorial(i - 1);
	
	printf("i: %d\n", i);
}
int main (void)
{
	factorial(5);
}