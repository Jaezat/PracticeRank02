/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:44:16 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/18 18:17:35 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0. */

/* void swap(int a, int b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
} */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i = 0;
	int j = i + 1;
	int biggest = 0;
	while(j < len)
	{
		if(tab[i] > tab[j])
			biggest = tab[i];
		j++;
		i++;
	}
	return biggest;
}

int main()
{
	int arr[] = {3, 1004, 4,16, 889};
	printf("Biggest: %d\n", max(arr, 5));
	
}