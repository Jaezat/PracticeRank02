/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 13:32:31 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/20 14:00:37 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* 
Assignment name  : snake_to_camel
Expected files   : snake_to_camel.c
Allowed functions: malloc, free, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in snake_case format
and converts it into a string in lowerCamelCase format.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

Examples:
$>./snake_to_camel "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./snake_to_camel "hello_world" | cat -e
helloWorld$
$>./snake_to_camel | cat -e
$
 */

void snake_to_camel(char *str)
{
	int i = 0;
	
	while(str[i + 1])
	{
		if(str[i] == '_')
		{
			i++;
			char c = str[i] - 32;
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, &str[i], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		snake_to_camel(argv[1]);
	}
	write(1, "\n", 1);
}