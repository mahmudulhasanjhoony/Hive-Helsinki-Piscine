/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 18:17:28 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/18 19:34:34 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	hline(int x)
{
	if (x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		return ;
	}
	if (x == 2)
	{
		ft_putchar('A');
		ft_putchar('C');
		ft_putchar('\n');
		return ;
	}
	ft_putchar('A');
	while ((x - 2) > 0)
	{
		ft_putchar('B');
		x--;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	vline(int x)
{
	ft_putchar('B');
	if (x == 1)
	{
		ft_putchar('\n');
		return ;
	}
	if (x == 2)
	{
		ft_putchar('B');
		ft_putchar('\n');
		return ;
	}
	while ((x - 2) > 0)
	{
		ft_putchar(' ');
		x--;
	}
	ft_putchar('B');
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	int i;

	hline(x);
	i = y;
	while ((i - 2) > 0)
	{
		vline(x);
		i--;
	}
	if (y > 1)
	{
		hline(x);
	}
	return (0);
}
