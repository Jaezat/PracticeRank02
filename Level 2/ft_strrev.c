/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:14:58 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/18 12:35:50 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* 
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
 */

/* char    *ft_strrev(char *str)
{
	int i = 0;
	int length = 0;
	while(str[length])	
		length++;
	char temp;
	while(i < length)
	{
		char *p1 =  &str[i];
		char *p2 = &str[length - 1];
	
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		 
		i++;
		length--;
	}
	return (str);
} */


#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;


	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < len - 1)
	{
		tmp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tmp;
		i++;
		len--;
	}
	return (str);
}

int	main(void)
{
	char s[] = "Hello World";
	ft_strrev(s);
	printf("%s\n", s);
	return (0);
}

/* int main()
{
	char str[] = "Hola";
	
	printf("result: %s \n", ft_strrev(str));
} */