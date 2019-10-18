/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thinguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 16:40:05 by thinguye          #+#    #+#             */
/*   Updated: 2019/08/31 18:05:07 by elindber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hdrs.h"

void	top_row_nd(int x)
{
	int i;

	i = 2;
	ft_putchar('A');
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
}

void	bot_row_nd(int x)
{
	int i;

	i = 2;
	ft_putchar('C');
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
}

void	mid_row_nd(int x, int y)
{
	int a;
	int b;

	a = 2;
	b = 2;
	while (a++ < y)
	{
		ft_putchar('\n');
		ft_putchar('B');
		while (b++ < x)
		{
			ft_putchar(' ');
		}
		b = 2;
		if (x > 1)
		{
			ft_putchar('B');
		}
	}
}

void	rush_nd(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	top_row_nd(x);
	mid_row_nd(x, y);
	ft_putchar('\n');
	if (y > 1)
	{
		bot_row_nd(x);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		rush_nd(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
