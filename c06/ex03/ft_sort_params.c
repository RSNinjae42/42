/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 00:36:09 by kali              #+#    #+#             */
/*   Updated: 2021/08/23 00:54:08 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(const char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(const char *a, const char *b)
{
	int x;

	x = 0;
	while ((a[x] == b[x]) && (a[x] != '\0') && (b[x] != '\0'))
		x++;
	return (a[x] - b[x]);
}

void	ft_swap(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

int		main(int x, const char **y)
{
	int a;
	int b;
	int c;
	int arg[x];

	a = 1;
	b = 1;
	while (a < x)
	{
		arg[a] = a;
		a++;
	}
	while (b < x)
	{
		c = b;
		while (c < x)
		{
			if (ft_strcmp(y[arg[b]], y[arg[c]]) > 0)
				ft_swap(&arg[b], &arg[c]);
			c++;
		}
		ft_putstr(y[arg[b++]]);
	}
	return (0);
}