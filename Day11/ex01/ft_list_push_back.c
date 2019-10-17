/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 15:53:03 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/28 16:56:44 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *ptr 
	ptr	= begin_list;

	while (ptr->next != 0)
	{
		ptr = ptr->next;
	}
	ptr->next = ft_create_elem(data);	
}
