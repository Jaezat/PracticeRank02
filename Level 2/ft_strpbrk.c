/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:56:55 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/18 11:09:17 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>




char *ft_strpbrk(char *s1, char *s2)
{
	int i = 0;
	int j;
	while(s2[i])
	{
		j = 0;
		while(s1[j])
		{
			if (s1[j] == s2[i])
				return &s1[j];
			j++;
		}
		i++;
	}
	return (NULL);
}

int main()
{
	char *s1 = "Hola qekkjkj,ncdkjdfksj4324pedo";
	char *s2 = "4324";

	char *result = ft_strpbrk(s1, s2);
	printf("Result: %s \n", result);
	
}

