/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:28:10 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/15 14:30:49 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/* Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$> */

/* 1st try: 15/09 */

/* My version: */

/* int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 1;
	}
	int i = 0;
	int j = 0;
	int k = 0;
	char *str = argv[1];
	while(str[i])
	{
		if (str[i] == ' ')
			k = i + 1;
		if (str[i] != ' ' )
		{
			j = i;
			if(str[i+1] == ' ')
				break;
		}
		i++;
	}
	if (k == 0 && j != 0)
	{
		int i = 0;
		while (i <= j)
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	else if (k != 0 && j != 0)
	{
		while (k <= j)
		{
			write(1, &str[k], 1);
			k++;
		}
	}
	return 0;
} */

//The solution:

#include <unistd.h>

int main (int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
}