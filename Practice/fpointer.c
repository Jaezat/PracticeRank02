/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpointer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 18:46:34 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/24 20:30:44 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// functions pointer is basicalluy a pointer, that points to a espace in memory where a function is stored

/* int fun(int a, int b)
{
	return a + b;
} */


void uptolowcase(void *letter)
{
	printf("%c", *(char *)letter);
}

int addtwovoid(void *a, void *b)
{
	return (*(int*)a) + (*(int*)b);
}

int main()
{
	int a = 65;

	int b = 99;
	
	uptolowcase(&a);
	printf("%d\n", addtwovoid(&a, &b));
	

}