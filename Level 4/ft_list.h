/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 18:16:46 by mariacos          #+#    #+#             */
/*   Updated: 2025/09/24 18:18:02 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdio.h>
#include <unistd.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;





#endif 