/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 00:10:37 by kali              #+#    #+#             */
/*   Updated: 2021/08/23 00:22:03 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char *x;

	x = str;
	while (*x != 0)
	{
		write(1, x, 1);
		x++;
	}
	write(1, "\n", 1);
}

int	main(int a, char *b[])
{
	int	y;

	y = 1;
	while (y < a)
	{
		ft_putstr(b[y]);
		y++;
	}
	return (0);
}