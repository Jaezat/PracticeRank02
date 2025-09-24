/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 21:11:52 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/19 12:34:16 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* void ft_putnbr(int num)
{
	char digit;
	
	if(num > 9)
		ft_putnbr(num / 10);

	digit = num % 10;
	digit = num + '0';
	write(1, &digit, 1);
} */


void ft_putnbr(int num)
{
	if(num > 9)
		ft_putnbr(num / 10);
	
	write(1, &"123456789"[num %10], 1);
}




int main(void)
{
	int index = 1;
	while(index <= 100)
	{
		if((index % 3 == 0) && (index % 5 == 0))
			write(1, "FizzBuzz", 8);
		else if (index % 3 == 0)
			write(1, "Fizz", 4);
		else if(index % 5 == 0)
			write(1, "Buzz", 4);
		else
			ft_putnbr(index);
		index++;
		write(1, "\n", 1);
	}
	
	return 0;
}