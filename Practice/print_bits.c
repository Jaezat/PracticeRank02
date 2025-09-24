/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:35:22 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/19 12:39:15 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main ()
{
	int num = 5;
	int mask = 128;
	int j = 0;
	while(mask > j)
	{
		if((num & mask) == 0)
			write(1, "0", 1);
		else
			write(1, "1", 1);
		mask = mask >> 1;
	}
	
}