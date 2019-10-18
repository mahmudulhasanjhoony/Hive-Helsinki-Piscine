/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 18:57:01 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/30 19:06:27 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		root = btree_create_node(root);
	else
	{
		btree_apply_infix(root->left, (*applyf));
		btree_apply_infix(root->item, (*applyf));
		btree_apply_infix(root->right, (*applyf));
	}
}
