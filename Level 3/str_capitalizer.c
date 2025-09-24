/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:30:08 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/23 12:27:12 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* 
Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
	 
$>*/

int is_lower(int c)
{
	if(c >= 'a' && c <= 'z')
		return 1;
	return 0;
}

int is_upper(int c)
{
	if(c >= 'A' && c <= 'Z')
		return 1;
	return 0;
}

int is_char(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	return 0;
}

int is_space(int c)
{
	if(c == ' ')
		return 1;
	return 0;
}

void str_change(char *str)
{
	int i = 0;
	while(str[i + 1])
	{
		if(i == 0 && is_lower(str[i]))
			str[i] -= 32;
		else if(is_space(str[i]) && is_lower(str[i + 1]))
			str[i + 1] -= 32;
		else if((!is_char(str[i])) && !is_space(str[i]) && is_upper(str[i + 1]))
			str[i + 1] += 32;
		else if (is_char(str[i - 1]) && is_upper(str[i]) && (is_char(str[i + 1]) || is_space(str[i + 1])))
			str[i] += 32;
		write(1, &str[i], 1);
		i++;
	}
	if (is_char(str[i - 1]) && is_upper(str[i]) && str[i + 1] == 0)
			str[i] += 32;
	write(1, &str[i], 1);
}

int main(int argc, char **argv)
{
	if(argc == 1)
		write(1, "\n", 1);
	else
	{
		int i = 1;
		int limit_space = 1;
		while(argv[i])
		{
			str_change(argv[i]);
			write(1, "\n", 1);
			int space = 0;
			while (space < limit_space)
			{
				write(1, " ", 1);
				space++;
			}
			limit_space++;
			i++;
		}
	}
	return (0);
}