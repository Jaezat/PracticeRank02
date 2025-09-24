/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:20:00 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/15 17:22:52 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	
	return (i);
}

int main ()
{
	char *str = "Holi que pedo";
	int str_length = ft_strlen(str);
	printf("length: %d\n", str_length);
}