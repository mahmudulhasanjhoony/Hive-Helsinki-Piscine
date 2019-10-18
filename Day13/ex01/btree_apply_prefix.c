/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 18:48:25 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/30 19:07:11 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		root = btree_create_node(root);
	else
	{
		btree_apply_prefix(root->item, (*applyf));
		btree_apply_prefix(root->left, (*applyf));
		btree_apply_prefix(root->right, (*applyf));
	}
}
