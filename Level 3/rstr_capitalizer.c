/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 20:48:31 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/23 11:08:27 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

A letter is a character in the set [a-zA-Z]

If there are no parameters, display \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>
 */


#include <stdio.h>
#include <unistd.h>


int is_char(int c)
{
	if(c >= 'a' && c <= 'z')
		return 1;
	return 0;
}

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		int j = 1;
		int i = 0;
		int spaces;
		int spaces_limit = 1; 
		while(argv[j])
		{
			i = 0;
			while(argv[j][i])
			{
				if(argv[j][i] >= 'A' && argv[j][i] <= 'Z')
					argv[j][i] += 32;
				if((argv[j][i + 1] == ' ' || argv[j][i + 1] == 0) && is_char(argv[j][i]))
					argv[j][i] -= 32;
				write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			spaces = 0;
			while(spaces < spaces_limit)
			{
				write(1, " ", 1);
				spaces++;
			}
			j++;
			spaces_limit++;
		}
	}
	write(1, "\n", 1);
	return 1;
}

