/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:43:54 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/22 16:14:55 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
 */


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
		while(i < range)
		{
			array[i] = start;
			start++;
			i++;
		}
		array[i] = end;
	}
	else
	{
		range = start - end;
		// printf("Range2: %d\n", range);
		array = malloc(sizeof(range));
		int i = 0;
		while(range > i)
		{
			array[range] = end;
			// printf("Here");
			end++;
			range--;
		}
		array[i] = start;
	}
	
	return array;
}

int main()
{
	int start = -10;
	int end = 5;
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