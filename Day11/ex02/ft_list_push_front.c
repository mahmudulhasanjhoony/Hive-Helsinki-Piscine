/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 19:14:20 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/28 19:59:53 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*ptr;
	ptr = begin_list;

	if (ptr)
	{
		ptr = ft_create_elem(data);
		ptr->next = *begin_list;
		*begin_list = ptr;
	}
}
