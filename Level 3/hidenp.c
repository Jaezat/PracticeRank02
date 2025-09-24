/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:35:53 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/22 17:14:45 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>
 */

#include <stdio.h>
#include <unistd.h>

int hidenp(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	int found = 0;
	int length_str1 = 0;
	int letters_check[256] = {};
	while(str1[length_str1])
		length_str1++;
	while(str1[i])
	{
		while(str2[j])
		{
			if(str1[i] == str2[j] && !letters_check[(int)str1[i]])
			{
				letters_check[(int)str1[i]] = 1;
				found++;
				break;
			}
			j++;
		}
		i++;
	}
	if(found == length_str1)
			return 1;
	return 0;	
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int result = hidenp(argv[1], argv[2]);
		char c = result + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}