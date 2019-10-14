/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 10:03:41 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/22 11:21:15 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*ret;

	if (min >= max)
	{
		ret = NULL;
		return (ret);
	}
	range = ((max--) - min);
	ret = (int*)malloc(sizeof(*ret) * range);
	i = 0;
	while (i < range)
	{
		ret[i] = min++;
		i++;
	}
	return (ret);
}
