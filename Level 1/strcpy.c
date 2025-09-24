/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:06:35 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/15 17:18:10 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	
	return (i);
}

char *ft_strcpy(char *src, char *dst)
{
	int i = 0;
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return (dst);
}

int main ()
{
	char *src = "Hola que pedo no mames pinche kochina";
	int length_src = ft_strlen(src);
	char *dst = malloc((sizeof(char) * length_src) + 1);
	dst = ft_strcpy(src, dst);

	printf("Dst: %s\n", dst);

	return 0;
}