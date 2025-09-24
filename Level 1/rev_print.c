/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:42:05 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/16 10:53:48 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int length_str = ft_strlen(str);
		// printf("Length = %d\n", length_str);
		int j = 0;
		while(length_str > j)
		{
			write(1, &str[length_str - 1], 1);
			length_str--;
		}
	}
	write(1, "\n", 1);
	return 0;
}