/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 18:26:19 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/22 11:50:56 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
 */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* decimal to hex */

/* void put_nbrbase(int num)
{
	if(num > 9)
		put_nbrbase(num / 16);
	
	
	write(1, &"0123456789ABCDEF"[num % 16], 1);
}

int main()
{
	int num = 20000;
	write(1, "0x", 2);
	put_nbrbase(num);
} */

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

void ft_putnbr(int c)
{
	if (c > 9)
		ft_putnbr(c / 10);
	write(1, &"0123456789"[c % 10], 1);
}

int ft_space(int c)
{
	if((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}

int is_digitorletter(int c)
{
	if((c >= '0' && c <= '9') || (c == 'x') || (c >= 'a' && c <= 'F') || (c >= 'A' && c <= 'F'))
		return 1;
	return 0;
}

/* one hex to decimal */
void ft_atoi_base(char *num)
{
	char x_numbersUP[16] = "0123456789ABCDEF";
	char x_numbersLOW[16] = "0123456789abcdef";
	int length_x = ft_strlen(x_numbersUP);
	/* Aca tengo que verificar que no tenga - y esas mierdas */
	int i = 0;
	int length_num = ft_strlen(num);
	while(ft_space(num[i]))
		i++;
	if(num[i] == '-' || num[i] == '+')
		i++;
	while(!is_digitorletter(num[i]))
		i++;
	int n = 1;
	int result_decimal = 0;    
	while (length_num > i)
	{
	    char digito = num[length_num];
	    length_x= 15;
	    while (length_x >= 0)
	    {
	        if (digito == x_numbersUP[length_x] || digito == x_numbersLOW[length_x])
	        {
	            int value_decimal = length_x;
	            result_decimal += value_decimal * n;
				// printf("Result: %d\n", result_decimal);
	            n *= 16;
	            break;
	        }
	        length_x--;
	    }
	    length_num--; // paso al dígito anterior
	}
	ft_putnbr(result_decimal);
}


int main(int argc, char **argv)
{
	if(argc ==2)
	{
		ft_atoi_base(argv[1]);
	}
	
}





/* 

----





int ft_atoi_base(const char *str, int str_base);
int isspace(int c);
int isvalid(int c, int baselen);

int ft_atoi_base(const char *str, int str_base)
{
    int res = 0, sign = 1, i = 0;
    // Skip the whitespaces
    while (isspace(str[i])
        i++;
    // Check if the number is negative
    if (str[i] == '+' && str[i + 1] != '-')
        i++;
    // If the number is negative, set the sign to -1 and skip the '-'
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    
    // Loop through the string and convert the numebr to base 10
    while (str[i] && isvalid(str[i], str_base))
    {
        // Multiply the result by the base
        res *= str_base;
        
        // Add the value of the character to the result
        // If the character is a digit, substract the value of '0'
        // from it
        // i.e. '5' - '0' = 5 because the ASCII value of '5' is 53
        // and the ASCII value of '0' is 48
        if (str[i] >= '0' && str[i] <= 9)
            res += str[i] - '0';
        // If the character is a leter, substract the value of 'a' or
        // 'A' from it and add 10
        // i.e. 'f' - 'a' + 10  = 15 because the ASCII value of 'f' is
        // 102 and the ASCII value of 'a' is 97
        else if (str[i] >= 'a' && str[i] <= 'f')
            res += str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            res += str[i] - 'A' + 10;
        i++;
    }
    // Return the result multiplied by the sign
    return (res * sign);
}
// Simple function to check if the character is valid for the base
int isvalid(int ch, int baselen)
{
    // Define the base
    char *lcbase = "0123456789abcdef";
    char *ucbase = "0123456789ABCDEF";
    int i = 0;
    
    // Loop through the base and check if the character is valid
    while (i < baselen)
    {
        // If the character is found in the base, return 1
        if (ch == lcbase[i] || ch == ucbase[i])
            return (1);
        i++;
    }
    return (0);
}

// Simple function to check if the character is a whitespace
int isspace(int c)
{
     if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
         return (1);
     return (0);
} */

// Uncomment the main to test the function
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	(void) ac;
// 	(void) av;
// 	if (ac == 3)
// 	{
// 		printf("%d", ft_atoi_base(av[1], ft_atoi_base(av[2], 10)));
// 		return (0);
// 	}
// }