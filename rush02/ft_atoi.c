/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thinguye <thinguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 22:11:32 by thinguye          #+#    #+#             */
/*   Updated: 2019/08/19 22:48:00 by thinguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	index;
	int	a;
	int	b;

	index = 0;
	a = 0;
	b = 1;
	if (str[0] == '-')
	{
		b = -1;
		index = 1;
	}
	while (str[index++])
	{
		if (a == 0 && ((str[index] > 8 && str[index] < 14) ||
		str[index] == 32 || str[index] == 43))
		{
			index++;
			continue;
		}
		else if (str[index] < 48 || str[index] > 57)
			break ;
		a = a * 10 + (str[index++] - '0');
	}
	return (a);
}
