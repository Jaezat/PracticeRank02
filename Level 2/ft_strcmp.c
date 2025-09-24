/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:49:16 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/17 21:38:17 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);

STRCMP(3) (simplified)

NAME
    strcmp -- compare strings
SYNOPSIS
    #include <string.h>
    int strcmp(const char *s1, const char *s2);
DESCRIPTION
    The strcmp() and strncmp() functions lexicographically compare the null-
terminated strings s1 and s2.
RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than,
 equal to, or less than 0, according as the string s1 is greater than,
 equal to, or less than the string s2.  The comparison is done using
 unsigned characters, so that ‘\200’ is greater than ‘\0’.
 */

#include <stdio.h>
#include <string.h>


int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
		{
			if(s1[i] > s2[i])
				return (1);
			else if (s1[i] < s2[i])
				return (-1);
		}
		i++;
	}
	return (0);
}

int main (void)
{
	char *s1 = "A";
	char *s2 = "B";
	int i = ft_strcmp(s1, s2);
	int i_strcmp = strcmp(s1, s2);
	
	printf("ft_strcmp:\n");
	if(i == 0)
		printf("They're equal\n");
	else if(i < 0)
		printf("Index in str1 is smaller\n");
	else 
		printf("Index in str1 is bigger\n");

	printf("Strcmp:\n");
	if(i_strcmp == 0)
		printf("They're equal\n");
	else if(i_strcmp < 0)
		printf("Index in str1 is smaller\n");
	else 
		printf("Index in str1 is bigger\n");
	
}