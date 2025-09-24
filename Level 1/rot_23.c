/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_23.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:58:57 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/16 13:17:09 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
 */

#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		char c;
		int i = 0;
		char new_char;
		while(argv[1][i])	
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				int pos = (argv[1][i] - 'A');
				new_char = ((pos + 13) % 26) + 'A';
			}
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				int pos = (argv[1][i] - 'a');
				new_char = ((pos + 13) % 26) + 'a';
			}
			write(1, &new_char, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;	
}