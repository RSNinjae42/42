/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 00:24:19 by kali              #+#    #+#             */
/*   Updated: 2021/08/23 00:35:25 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int x, char **y)
{
	int	a;
	int	b;
	
	a = x -1;
	b = 0;
	if(x >1)
	{
		while (a > 0)
		{
			while (y[a][b] != '\0')
			{
				write(1, &y[a][b], 1);
				b++;

			}
		}
		write(1, "\n", 1);
		a--;
	}
	return (0);
}