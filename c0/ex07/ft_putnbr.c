/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:22:42 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/11 16:25:16 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	r;

	if (nb <= 9 && nb >= 0)
	{
		r = nb + '0';
		write (1, &r, 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		r = (nb % 10) + '0';
		write (1, &r, 1);
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
		ft_putnbr(nb);
	}
}
