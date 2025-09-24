/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:19:38 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/18 20:16:35 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010" */

/* fuck esto esta mal: porque esta dallenando desde el otro lado!!!! fuck, tiene que ser al reves */

int main ()
{
	int num = 6;
	int mascara = 128;
	while(mascara)
	{
		if ((num & mascara) == 0)
			write(1, "0", 1);
		else	
			write(1, "1", 1);
		mascara >>= 1;
	}
	return 0;
}