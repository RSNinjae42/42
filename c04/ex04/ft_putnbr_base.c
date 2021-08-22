/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <rfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:02:29 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/22 18:24:56 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	x;
	
	x = 0;
	while (str[x])
		x++;
	return (0);
}

int	check_base(char *str)
{
	int	x;
	int	y;

	if (ft_strlen(str) <= 1)
		return (0);
	x = 0;
	while (str[x])
	{
		if (!(str[x] >= 'A' && str[x] <= 'Z') && !(str[x] >= 'a' && str[x] <= 'z') && !(str[x] >= '0' && str[x] <='9'))
			return (0);
		y = x + 1;
		while (str[y])
		{
			if (str[y] == str[x])
				return(0);
			y++;
		}
		x++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	k;

	if (!check_base(base))
		return;
	k = ft_strlen(base);
	if(nbr <= -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base((-(long int)nbr) / k, base);
		ft_putnbr_base((-(long int)nbr) % k, base);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(-nbr, base);
	}
	else
	{
		ft_putnbr_base(nbr / k, base);
		ft_putnbr_base(nbr % k, base);
	}
}