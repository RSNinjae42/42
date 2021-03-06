/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:23:10 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/11 15:51:44 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	n[3];

	n[0] = '0';
	while (n[0] <= '7')
	{
		n[1] = n[0] + 1;
		while (n[1] <= '8')
		{
			n[2] = n[1] + 1;
			while (n[2] <= '9')
			{
				write (1, &n[0], 1);
				write (1, &n[1], 1);
				write (1, &n[2], 1);
				if (n[0] != '7')
				{
					write (1, ", ", 2);
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
