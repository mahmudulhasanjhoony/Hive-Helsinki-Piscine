/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 20:55:26 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/22 21:19:54 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	char str[] = "42";
	ft_rot42(str);
	return (0);
}

char *ft_rot42(char *str)
{
	int i;
	char result = 0;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '4')
		{
			result = str[0] - 50;
			ft_putchar(result);
		}
		if (str[1] == '2')
		{
			result = str[1] + 50;
			ft_putchar(result);
		}
		i++;
	}
}
