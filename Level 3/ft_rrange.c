/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:16:50 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/22 16:33:27 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0. */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int     *ft_range(int start, int end)
{
	int range;
	int *array = NULL;
	if(end > start)
	{
		range = end - start;
		// printf("Range1: %d\n", range);
		array = malloc(sizeof(int) * range);
		if(!array)
			return NULL;
		int i = 0;
		while(range > i)
		{
			array[range] = end;
			end--;
			range--;
			// i++;
		}
		array[i] = start;
	}
	else
	{
		range = start - end;
		// printf("Range2: %d\n", range);
		array = malloc(sizeof(range));
		int i = 0;
		while(i < range)
		{
			array[i] = end;
			// printf("Here");
			end++;
			i++;
		}
		array[i] = start;
	}
	
	return array;
}

int main()
{
	int start = 0;
	int end = -3;
	int *array = ft_range(start, end);
	int i = 0;
	int range;
	if(start < end)
		range = end - start;
	else
		range = start - end;
	printf("Range: %d\n", range);
	while(i <= range)
	{
		printf("%d\n", array[i]);
		i++;
	}
}