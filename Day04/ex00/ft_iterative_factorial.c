/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhasan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 23:02:03 by mhasan            #+#    #+#             */
/*   Updated: 2019/08/17 16:21:56 by mhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_interative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb >= 0 || nb < 12)
	{
		while (nb > 0)
		{
			result = nb * result;
			nb--;
		}
		return (result);
	}
	else
		return (0);
}
