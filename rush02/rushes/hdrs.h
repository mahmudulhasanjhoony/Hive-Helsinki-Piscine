/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hdrs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thinguye <thinguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 11:31:59 by elindber          #+#    #+#             */
/*   Updated: 2019/08/31 17:02:55 by thinguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HDRS_H
# define HDRS_H

# include <unistd.h>
# define BUF_SIZE 13337

void	ft_errors(int fd, char c);
void	ft_putchar(char c);
void	ft_putstr(int fd, char *str);
void	rush_zr(int x, int y);
void	rush_ft(int x, int y);
void	rush_nd(int x, int y);
void	rush_rd(int x, int y);
void	rush_th(int x, int y);
int		ft_atoi(char *str);

#endif
