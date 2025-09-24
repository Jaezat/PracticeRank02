/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:12:22 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/19 17:49:23 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* 
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e

 */

int wdmatch(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	int length_str1 = 0;
	int str1_letters = 0;
	while(str1[length_str1])
		length_str1++;
	int length_str2 = 0;
	while(str2[length_str2])
		length_str2++;
	while(str1[i])
	{
		while(j < length_str2)
		{
			if(str1[i] == str2[j])
			{
				str1_letters++;
				break;
			}
			j++;
		}
		i++;
	}
	if (str1_letters == length_str1)
		return 0;
	return 1;
}
int main (int argc, char **argv)
{
	char *result;
	if(argc == 3)
	{
		int result = wdmatch(argv[1], argv[2]);
		if(result == 0)
		{
			int i = 0;
			while(argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			return (0);
		}
	}
	write(1, "\n", 1);
	return (1);
}