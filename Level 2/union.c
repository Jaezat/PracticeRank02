/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:38:29 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/20 13:13:52 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* 
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
 */

void ft_union(char *str1, char *str2)
{
	int i = 0;
	int j = 0;

	int doubles_in_stg1[256] = {};
	int doubles_in_stg2[256] = {};
	while(str1[i])
	{
		if((!doubles_in_stg1[(int)str1[i]]))
		{
			doubles_in_stg1[(int)str1[i]] = 1;
			write(1, &str1[i], 1);
		}
		i++;
	}
	while (str2[j])
	{
    	if ((!doubles_in_stg1[(int)str2[j]]) && (!doubles_in_stg2[(int)str2[j]]))
    	{
    	    doubles_in_stg2[(int)str2[j]] = 1;
    	    write(1, &str2[j], 1);
    	}
    	j++;
	}

}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		// printf("Here1");
		ft_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return 0;
}