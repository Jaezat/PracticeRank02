/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:33:35 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/21 18:23:56 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$>


 */

#include <stdio.h>
#include <unistd.h>

int ft_isspace(int c)
{
	if (c <= 32)
		return 1;
	return 0;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = 0;
		int space = 0;
		int length = 0;
		int j = 0;
		while(str[length])
			length++;
		int last_letter = length;
		while(length > j)
		{
			if(ft_isspace(str[length]))
				last_letter--;
			else
				break;
			length--;
		}
		while(ft_isspace(str[i]))
			i++;
		while(i < last_letter)
		{
			if(ft_isspace(str[i]))
			{
				space = 1;
				i++;
			}	
			if(!ft_isspace(str[i]))
			{
				if(space)
				{
					write(1, "   ", 3);
				}
				space = 0;
				write(1, &str[i], 1);
			}
			i++;	
		}
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}