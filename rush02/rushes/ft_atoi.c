/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thinguye <thinguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 22:11:32 by thinguye          #+#    #+#             */
/*   Updated: 2019/08/31 17:29:05 by thinguye         ###   ########.fr       */
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
	if ((str[index] > 8 && str[index] < 14) ||
	str[index] == 32)
		index++;
	if (str[index] == '-')
	{
		b = -1;
		index++;
	}
	else if (str[index] == '+')
	{
		index++;
	}
	while (str[index] > 47 && str[index] < 58)
		a = a * 10 + (str[index++] - '0');
	a = a * b;
	return (a);
}
