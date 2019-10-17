/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 19:39:42 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/29 18:11:56 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct s_list;

struct s_list
{
	void			*data;
	struct	s_list	*next;

}					t_list;
t_list	*ft_create_elem(void *data);
#endif
