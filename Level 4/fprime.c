/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 19:03:50 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/24 14:50:08 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* 
Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
 */

typedef struct numbers {
	int number;
	struct numbers *next;
}	n_num;


/* void print_nodes(n_num *head)
{
	// n_num *current = NULL;
	n_num *current = head;
	while(current != NULL)
	{
		// printf("Hre");
		printf("%d\n", current->number);
		current = current->next;
	}
} */
void put_nbr(int c)
{
	if(c > 9)
		put_nbr(c / 10);
	write(1, &"0123456789"[c % 10], 1);
}

void print_nodes(n_num *head)
{
	n_num *current = head;

	while(current != NULL)
	{
		put_nbr(current->number);
		if(current->next == NULL)
			break;
		write(1, "*", 1);

		current = current->next;
	}
}

int check_ifprime(int num)
{
	int i = 2;
	int isPrime;
	while(i < num)
	{
		if(num % i == 0)
		{
			isPrime = 1;
			return 1;
		}
		else
			isPrime = 0;
		i++;
	}
	return 0;
}

int main ()
{
	int num = 42;
	int i = 2;
	n_num *head_prime_numbers = NULL;
	n_num *current_facto = head_prime_numbers;
	while(i <= num)
	{
		if(num % i == 0)
		{
			if(check_ifprime(i) == 0)
			{
				n_num *new_node = malloc(sizeof(n_num));
				new_node->number = i;
				new_node->next = NULL;
				
				if(!head_prime_numbers)
					head_prime_numbers = new_node;
				
				else
					current_facto->next = new_node;
				current_facto =  new_node;
			}
			num = num / i;
		}
		else
			i++;
	}
	print_nodes(head_prime_numbers);
}