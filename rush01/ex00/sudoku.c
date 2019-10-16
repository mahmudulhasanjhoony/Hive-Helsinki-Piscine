/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <mhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 19:56:31 by jsaikkon          #+#    #+#             */
/*   Updated: 2019/08/27 14:13:31 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		ft_strlen(const char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

int		**argv_parse(char **argv)
{
	int row;
	int col;
	int i;
	int **grid;

	grid = (int **)malloc(sizeof(int *) * 9);
	row = 0;
	while (row < 9)
	{
		if (ft_strlen(argv[row]) != 9)
		{
			ft_putstr("Error\n");
			_exit(1);
		}
		grid[row] = (int *)malloc(sizeof(int) * 9);
		col = 0;
		i = 1;
		while (col < 9)
		{
			while (i < 9)
			{
				if ((argv[row][col] == argv[row][i]) && argv[row][col] != '.')
				{
					ft_putstr("Error\n");
					_exit(1);
				}
				else
					i++;
			}
			col++;
			i = col + 1;
		}
		col = 0;
		while (col < 9)
		{
			if (argv[row][col] == '.')
				grid[row][col] = 0;
			else if (argv[row][col] >= '1' && argv[row][col] <= '9')
				grid[row][col] = argv[row][col] - '0';
			else
			{
				ft_putstr("Error\n");
				_exit(1);
			}
			col++;
		}
		row++;
	}
	return (grid);
}

int		main(int argc, char *argv[])
{
	int a;
	int b;
	int **grid;

	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	grid = argv_parse(&argv[1]);
	a = 0;
	while (a < 9)
	{
		b = 0;
		while (b < 9)
		{
			ft_putchar('0' + grid[a][b]);
			if (b != 8)
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
