/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:29:27 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/17 12:16:19 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* 
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
 */

#include <unistd.h>
#include <stdio.h>

/* SOLUCAO 1: */

/* int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int i = 0;
		char *str = argv[1];
		char org = argv[2][i];
		char rpl = argv[3][i];
		int org_in_str;
		while(str[i])
		{
			if(str[i] == org)
			{
				org_in_str = 0;
				break;
			}
			org_in_str = 1;
			i++;
		}
		if(org_in_str == 1)
		{
			write(1, str, ft_strlen(str));
			return (0);
		}
		i = 0;
		while(str[i])
		{
			if (str[i] == org)
			{
				str[i] = rpl;
				write(1, &str[i], 1);
			}
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
} */

/* SOLUCAO 2 */

int main (int argc, char **argv)
{
	if (argc == 4)
	{
		int i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}