/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <rfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:55:31 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/13 12:37:05 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rerv_int_tab(int *tab, int size)
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
