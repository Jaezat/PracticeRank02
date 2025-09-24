/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:15:04 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/17 20:47:18 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Atoi behaviours: */

/* - dos senales negativos/positivo: retorna 0
   - un simbolo que no sea '-' o '+' : retorna 0
   - un '+' : retornar el numero positivos
   - un numero que tenga alguna como algun punto: retorna el numero int directo
   - int_max : tarda pero retorna el numero ok
   - int_mon : idem, retorna ok
   - chars mezclados entre numeros: retorna 0
   - chars dsp de numeros: retorna numero solo
   - char entre numers: ok retorna el primer nro antes del char
   - char antes numero: nok retorna solo 0
   - espacios antes de numero: ok retorna numero
   - espacios + chars antes de numero nok : retorna 0
	



*/

#include <stdio.h>
#include <stdlib.h>


int is_space(char *str)
{
	int i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++
	
	if(i != 0)
		return (i)
	return 0;
}





int ft_atoi(char *str)
{
	int i = 0;

//Verificar los NOK:
	if(is_space(str))
		i = is_space(str);

	if (str[i] != '-' || str[i] != '+' || !(str[i] >= 48 && str[i] <= 57))
		return (0);
	




	
	else if()
	
	
}






















int main(void)
{
	char *str = "		    9    987";

	printf("%d\n", atoi(str));
	
}