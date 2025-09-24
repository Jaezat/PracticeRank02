/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:52:58 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/19 18:26:12 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100 */

 unsigned char swap_bits(unsigned char octet)
 {
	return ((octet >> 4 | octet << 4));
 }

 int main()
 {
	unsigned char num = 5;
	unsigned char swapped = swap_bits(num);

	int j = 7;
	printf("Before: \n");
	while(j >= 0)
	{
		char bit = ((num >> j) & 1) + '0';
		write(1, &bit, 1);
		j--;
	}
	printf("\n After:\n");
	int i = 7;
	while(i >= 0)
	{
		char bit = ((swapped >> i) & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
 }