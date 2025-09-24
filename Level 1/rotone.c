/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:04:22 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/17 11:28:34 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
-------------------------------------------------------------------------------- */
/* 
Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$> */

#include <stdio.h>
#include <unistd.h>
/* SOLUCAO NUMERO 1 */

/* int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		// char new_pos;
		// int pos;
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				int pos = (argv[1][i] - 65) + 1;
				char new_pos = (pos % 26) + 65;
				write(1, &new_pos, 1);
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				int pos = (argv[1][i] - 97) + 1;
				char new_pos = (pos % 26) + 97;
				write(1, &new_pos, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}		
	}
	write(1, "\n", 1);
	return 0;
} */


/* SOLUCAO NUMBER 2 */

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while(argv[1][i])
		{
			if(argv[1][i] == 90 || argv[1][i] == 122)
				argv[1][i] -= 25;
			else if ((argv[1][i] >= 65 && argv[1][i] <= 89) || (argv[1][i] >= 97 && argv[1][i] <= 121))
				argv[1][i] += 1;
			write(1, &argv[1][i], 1);
			i++;	
		}
	}
	write(1, "\n", 1);
}