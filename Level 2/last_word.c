/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:16:15 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/18 17:02:10 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* 
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>

 */

// WRONG VERSION
void last_word(char *str)
{
	 int i = 0;
	int space;
	int end_of_str;
	int length_str = 0;
	while(str[length_str])
		length_str++;
	int j = length_str;
	while(length_str > i)
	{
		if(str[length_str + 1] == NULL && str[length_str] == ' ')
		{
			if(str[length_str - 1] == ' ')
				length_str++;
			else if (!(str[length_str - 1] == ' '))
				length_str++;
		}
		
		if(!(str[length_str] == ' ') && (str[length_str - 1] == ' '))
		{
			
			/* space = length_str + 1;
			while(space < j)
			{
				write(1, &str[space], 1);
				space++;
			}
			break; */
			// printf("Space: %d\n", space); 
		}
		  
		length_str--;
	} 
	/* printf("i: %d\n", i);
	printf("length_str: %d\n", length_str); */
	return ;
}

int main (int argc, char **argv)
{
	if(argc == 2)
	{
		// printf("wesh\n");
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}

