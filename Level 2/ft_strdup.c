/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:26:22 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/18 10:36:07 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*        The strdup() function returns a pointer to a new string which is a
       duplicate of the string s.  Memory for the new string is obtained
       with malloc(3), and can be freed with free(3).

       The strndup() function is similar, but copies at most n bytes.  If
       s is longer than n, only n bytes are copied, and a terminating
       null byte ('\0') is added.

       strdupa() and strndupa() are similar, but use alloca(3) to
       allocate the buffer.
 */

int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strdup(char *str)
{
	char *dup = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!dup)
		return NULL;
	
	int i = 0;
	while(str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	
	return (dup);	
}

int main()
{
	char *original =  "Hola que pedo";
	char *copy = ft_strdup(original);

	printf("Original: %s\n", original);
	printf("Copy: %s\n", copy);
	
}