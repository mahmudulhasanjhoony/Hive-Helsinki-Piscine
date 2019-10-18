/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thinguye <thinguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 16:39:00 by thinguye          #+#    #+#             */
/*   Updated: 2019/08/31 18:00:35 by elindber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "hdrs.h"

void	top_bot_row_zr(int x)
{
	int i;

	i = 2;
	ft_putchar('o');
	while (i < x)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
}

void	mid_row_zr(int x, int y)
{
	int a;
	int b;

	a = 2;
	b = 2;
	while (a++ < y)
	{
		ft_putchar('\n');
		ft_putchar('|');
		while (b++ < x)
		{
			ft_putchar(' ');
		}
		b = 2;
		if (x > 1)
		{
			ft_putchar('|');
		}
	}
}

void	rush_zr(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	top_bot_row_zr(x);
	mid_row_zr(x, y);
	ft_putchar('\n');
	if (y > 1)
	{
		top_bot_row_zr(x);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		rush_zr(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
