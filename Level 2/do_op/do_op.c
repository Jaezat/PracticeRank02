/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 17:40:01 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/17 19:11:45 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Asoperationment name  : do_op
Expected files   : *.c, *.h
Allowed functioint first_number = atoi(first_number);
int second_number = atoi(second_number);
ns: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operate chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$ */

#include "do_op.h"

int operate(int number1, int number2, char *opt)
{
	int i = 0;
	printf("Here3\n");
	if(opt[i] == '+')
		return (number1 + number2);
	else if(opt[i] == '-')
		return (number1 - number2);
	else if(opt[i] == '%')
		return (number1 % number2);
	else if(opt[i] == '/')
		return (number1 / number2);
	else if(opt[i] == '*')
		return (number1 * number2);
	
	return (0);
}


int do_op(char *first_number, char *second_number, char *opt)
{
	printf("Here2\n");
	int number1 = atoi(first_number);
	int number2 = atoi(second_number);
	int result = operate(number1, number2, opt);
	
	return (result);
}