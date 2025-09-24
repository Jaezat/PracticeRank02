/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_argv[1].c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:46:21 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/21 17:01:39 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* 
Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.

Example:

$> ./epur_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
vous voyez c'est facile d'afficher la meme chose$
$> ./epur_str " seulement          la c'est      plus dur " | cat -e
seulement la c'est plus dur$
$> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./epur_str "" | cat -e
$
$>*/

int ft_isspace(int c)
{
	if((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}

/* int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		int j = 0;
		int length = 0;
		while(argv[1][length])
			length++;		
		while(argv[1][i])
		{
			if(ft_isspace(argv[1][i]))
				i++;
			j = i;
			if((argv[1][j] != ' ' && argv[1][j] != '\t') && (argv[1][j + 1] >= 9 && argv[1][j + 1] <= 13) || argv[1][j + 1] == 32)
			{
				j++;
				while((argv[1][j] >= 9 && argv[1][j] <= 13) || argv[1][j] == 32)
					j++;
				if (j > i)
				{
					if ( i > 0)
						write(1, " ", 1);
					i = j;
				}
			}
			write(1, &argv[1][i], 1);
			i++;
		}	
	}
	write(1, "\n", 1);
} */
/* 

void search_space(char *str)
{
	int i = 0;
	while(ft_isspace(str[i]))
		i++;
	while(str[i])
	{
		if(!ft_isspace(str[i]))
		{
			write(1, &str[i], 1);
			i++;
		}
		else if(ft_isspace(str[i]))
			i++;
		write(1, " ", 1);
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		while(ft_isspace(argv[1][i]))
			i++;
		while(argv[1][i + 1])
		{
			if(ft_isspace(argv[1][i]))
				i++;
			if((ft_isspace(argv[1][i])) && (!ft_isspace(argv[1][i + 1])))
				write(1, " ", 1);
			else if(!ft_isspace(argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			// write(1, " ", 1);
			
		}
	}
	write(1, "\n", 1);
} */


int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		int space = 0;

		while(ft_isspace(av[1][i]))
			i++;
		while(av[1][i])
		{
			if(ft_isspace(av[1][i]))
				space = 1;

			if(!ft_isspace(av[1][i]))
			{
				if(space)
					write(1, " ", 1);
				space = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
