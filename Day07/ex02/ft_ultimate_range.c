/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:49:34 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/22 21:31:18 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int diff;
	int *ret;

	diff = ((max--) - min);
	ret = (int*)malloc(sizeof(*ret) * diff);
	if (min >= max)
		return (NULL);
	i = 0;
	while (i < range)
	{
		ret[i] = min++;
		i++;
	}
	*range = ret;
	return (i);
}
