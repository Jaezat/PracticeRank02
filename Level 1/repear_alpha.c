/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repear_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:51:44 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/16 10:37:02 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//del 97 al 122


/* char *abecedario_max()
{
	char *abecedario_may = malloc((sizeof(char) * 26) + 1);
		
		int index_may = 1;
		int letras = 65;
		while(letras < 91)
		{
			abecedario_may[index_may] = letras;
			index_may++;
			letras++;
		}
		abecedario_may[index_may] = '\0';
		return abecedario_may;
}

char *abecedario_min()
{
	char *abecedario_min = malloc((sizeof(char) * 26) + 1);
	int index_min = 1;
	int letras = 97;
	while(letras < 123)
	{
		abecedario_min[index_min] = letras;
		index_min++;
		letras++;
	}
	abecedario_min[index_min] = '\0';

	return (abecedario_min);
}


void abc_may(char c, char *abecedario_may)
{
	int j = 1;
	while (abecedario_may[j])
	{
		if(abecedario_may[j] == c)
		{
			printf("Coinciden: %d\n", c);
			int k = 0;
			while(k < j)
			{
				write(1, &c, 1);
				k++;
			}
		}
		j++;
	}
}

void abc_min(char c, char *abecedario_minimo)
{
	int j = 1;
	while(abecedario_minimo[j])
	{
		if(abecedario_minimo[j] == c)
		{
			int k = 0;
			while(k < j)
			{
				write(1, &c, 1);
				k++;	
			}
		}
		j++;
	}	
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		
		char *str = argv[1];
		char *abecedario_may = abecedario_max();
		char *abecedario_minimo = abecedario_min();
		int i = 0;
		while(str[i])
		{
			if (str[i] >= 65 && str[i] <= 90)
				abc_may(str[i], abecedario_may);
			if (str[i] >= 97 && str[i] <= 122)
				abc_min(str[i], abecedario_minimo);
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	
	return (0);
} */


#include <unistd.h>

int main(int ac, char *av[])
{
    int i;
    int j;
    
    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            if (av[1][i] >= 65 && av[1][i] <= 90)
            {
                j = 0;
                while (j < av[1][i] - 64)
                {
                    write(1, &av[1][i], 1);
                    j++;
                }
            }
            else if (av[1][i] >= 97 && av[1][i] <= 122)
            {
                j = 0;
                while (j < av[1][i] - 96)
                {
                    write(1, &av[1][i], 1);
                    j++;
                }
            }
            else
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}

int main(int aargc, char **argv)
{
	int i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] => 65 && argv[1][i] <= 90)
			{
				int j = 0;
				while(j < argv[1][i] - 64)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			if(argv[1][i] => 97 && argv[1][i] => 122)
			{
				int j = 0;
				while(j < argv[1][i] - 96)
				{
					write(1, &str[1][i], 1);
					j++;
				}
			}
			else
				write(1, &str[1][i], 1);
			i++
		}
	}
}