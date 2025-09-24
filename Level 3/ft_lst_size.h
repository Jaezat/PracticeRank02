/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:54:44 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/22 15:39:37 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_lst_size_h
#define ft_lst_size_h

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


int	ft_list_size(t_list *begin_list);



#endif













