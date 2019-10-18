/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 17:56:08 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/29 18:06:25 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*ptr;

	ptr = malloc(sizeof(t_btree));
	if (ptr)
	{
		ptr->item = item;
		ptr->left = 0;
		ptr->right = 0;
	}
	return (ptr);
}
