/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thinguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 16:39:18 by thinguye          #+#    #+#             */
/*   Updated: 2019/08/31 17:55:19 by elindber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hdrs.h"

void	top_row_ft(int x)
{
	int i;

	i = 2;
	ft_putchar('/');
	while (i < x)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('\\');
	}
}

void	bot_row_ft(int x)
{
	int i;

	i = 2;
	ft_putchar('\\');
	while (i < x)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('/');
	}
}

void	mid_row_ft(int x, int y)
{
	int a;
	int b;

	a = 2;
	b = 2;
	while (a++ < y)
	{
		ft_putchar('\n');
		ft_putchar('*');
		while (b++ < x)
		{
			ft_putchar(' ');
		}
		b = 2;
		if (x > 1)
		{
			ft_putchar('*');
		}
	}
}

void	rush_ft(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	top_row_ft(x);
	mid_row_ft(x, y);
	ft_putchar('\n');
	if (y > 1)
	{
		bot_row_ft(x);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		rush_ft(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
