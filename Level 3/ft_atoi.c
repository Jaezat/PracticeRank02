/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:37:34 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/21 13:03:28 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
/* 

int ft_isspace(int c)
{
	if((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return 1;
	return 0;
}
int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int n = 1;
	
	while(ft_isspace(str[i]))
		i++;
	if(str[i] == '-')
	{
		n = -1;
		i++;
	}
	printf("i is: %c", i);
	while(ft_isdigit(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res *= n);
} */

int ft_isspace(int c)
{
	if((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}

int ft_isnumber(int c)
{
	if(c >= '0' && c <= '9')
		return 1;
	return 0;
}
int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int n = 1;

	while(ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while(ft_isnumber(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return res *= n;
}


int main()
{
	char *c = "6";
	printf("\n %d", ft_atoi(c));
}

