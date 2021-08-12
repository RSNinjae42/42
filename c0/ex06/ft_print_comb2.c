/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:20:55 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/11 16:21:00 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int num)
{
	char	d;
	char	u;

	d = (num / 10) + '0';
	u = (num % 10) + '0';
	write (1, &d, 1);
	write (1, &u, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 00;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_num(x);
			write (1, " ", 1);
			ft_print_num(y);
			if (x != 98)
			{
				write (1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}
