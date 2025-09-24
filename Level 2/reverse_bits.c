/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:25:49 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/19 17:09:42 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


unsigned char reverse_bits(unsigned char octal)
{
	int i = 8;
	unsigned char num = 0;
	while(i)
	{
		num = (num << 1) | (octal & 1);
		octal = octal >> 1;
		i--;
	}
	return (num);
	
}

int main ()
{
	unsigned char bit = 0;
	unsigned char result;
	unsigned char num = 8;
	result = reverse_bits(num);
	int i = 8;
	while(i)
	{
		bit = ((result >> i) & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
	return 0;
}