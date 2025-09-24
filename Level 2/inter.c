/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:40:33 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/20 12:51:47 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/* 
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

int inter(char *str1, char *str2)
{
	int i = 0;
	int j;
	int lookup[256] = {};
	while(str1[i])
	{		
		j = 0;
		while(str2[j])
		{
			if(str1[i] == str2[j] && (!lookup[(int)str2[j]]))
			{
				lookup[(int)str2[j]] = 1;
				write(1, &str1[i], 1);
			}
			j++;
		}
		i++;
	}
	return 0;
}



// Mi intento:

int main (int argc, char **argv)
{
	if(argc == 3)
	{
		if(!inter(argv[1], argv[2]))
			return 1;
	}
	write(1, "\n", 1);
}


/* Respuesta de ellos */

/* #include <unistd.h>

int	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i = 0, j;
	// create an array of int that will act as a lookup table
	// 256 is because of the ascii table, each one will
	// correspond to a single character
	int	lookup[256] = {};

	if (ac == 3)
	{
		// looping over the whole string
		while (av[1][i])
		{
			j = 0;
			// comparing against every character in the
			// second string
			while (av[2][j])
			{
				// checking if characters are the same
				// as well as checking in the lookup
				// table if the character not already
				// found
				if (av[1][i] == av[2][j] && !lookup[(int)av[2][j]])
				{
					// marking the character found
					// in the lookup table
					lookup[(int)av[2][j]] = 1;
					// writing the character
					// to the screen
					ft_putchar(av[2][j]);
				}
				j++;
			}
			i++;
		}
	}
	ft_putchar('\n');
}

int	ft_putchar(char c)
{
	return write(1, &c, 1);
} */