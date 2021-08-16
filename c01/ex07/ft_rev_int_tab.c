/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <rfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:55:31 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/16 12:04:34 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	size--;
	while (a < size / 2)
	{
		b = tab[a];
		tab[a] = tab[size];
		tab[size] = b;
		size--;
		a++;
	}
}

int main()
{
	int i[6] = {9, 9, 2, 0, 6, 0};

	ft_rev_int_tab(i, 6);

	for (int j = 0; j < 6; j++)
	{
		printf("%d ", i[j]);
	}
	return 0;
}
