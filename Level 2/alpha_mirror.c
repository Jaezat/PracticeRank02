/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 12:36:33 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/17 16:02:26 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$> */

/* Intento 1 */

/* int main(int argc, char **argv)
{
	if (argc == 2)                                                     	                                                           
	{
		int i = 0;
		while(argv[1][i])
		{
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				if(argv[1][i] >= 65 && argv[1][i] <= 77)
				{
					int pos = ((argv[1][i] - 65) + 25);
					char new_char = (pos % 26) + 65;
					write(1, &new_char, 1);
				}
				else if(argv[1][i] >= 78 && argv[1][i] <= 90)
				{
					int pos = ((argv[1][i] - 65) + 25);
					char new_char = (pos / 26) + 65;
					write(1, &new_char, 1);
				}
			}
			else if(argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				if(argv[1][i] >= 97 && argv[1][i] <= 109)
				{
					int pos = ((argv[1][i] - 97) + 25);
					char new_char = (pos % 26) + 97;
					write(1, &new_char, 1);
				}
				else if(argv[1][i] >= 110 && argv[1][i] <= 122)
				{
					int pos = ((argv[1][i] - 65) + 25);
					char new_char = (pos / 26) + 97;
					write(1, &new_char, 1);
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);	
} */


/* 
int main(int argc, char **argv)
{
	if (argc == 2)                                                     	                                                           
	{
		int n;
		int i = 0;
		while(argv[1][i])
		{
			int x = 1;
			int y = 26;
			int pos;
			while(x < y)
			{
				if(argv[1][i] >= 65 && argv[1][i] <= 90)
				{
					pos = argv[1][i] - 64;
					if (pos == x)
					{
						argv[1][i] = y + 64;
						break;
					}
					else if (pos == y)
						argv[1][i] = x + 64;
				}
				else if(argv[1][i] >= 97 && argv[1][i] <= 122)
				{
					pos = argv[1][i] - 96;
					if (pos == x)
						argv[1][i] = y + 96;
					else if (pos == y)
						argv[1][i] = x + 96;
				}
				else
					break;
				x++;
				y--;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);	
} */

/* Correcion: */
int main (int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		while(argv[1][i])
		{
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				argv[1][i] = 90 - argv[1][i] + 65;
			}
			else if(argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				argv[1][i] = 122 - argv[1][i] + 97;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}