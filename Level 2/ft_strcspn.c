/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 21:27:46 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/17 21:56:42 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str)
{
	size_t i = 0;
	while(str[i])
		i++;
	
	return(i);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	// int j = 0;
	size_t return_value;
	while(reject[i])
	{
		int j = 0;
		return_value = 0;
		while(s[j])
		{
			if(s[j] == reject[i])
			{
				return (return_value);
				break;
			}
			return_value++;
			j++;
		}
		i++;
	}
	return (ft_strlen(s));
}

int main(void)
{
	const char *s = "12345675;43234586l";
	const char *reject = "ewrtfghft;";
	size_t result = ft_strcspn(s, reject);
	size_t result_true = strcspn(s, reject);

	printf("Resultado: %zu\n", result);
	printf("Resultado de vd: %zu\n", result_true);
}
