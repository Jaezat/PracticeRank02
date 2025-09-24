/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:58:51 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/15 17:02:20 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str); */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main (void)
{
	char *str = "Hola que pedo";
	ft_putstr(str);
}