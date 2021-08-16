/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <rfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:06:45 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/13 14:07:23 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(){
	int	x;
	int	y;
	int	*a;
	int	*b;
	int c;
	int d;

	a = &c;
	b = &d;
	x = 8;
	y = 2;
	ft_div_mod(x, y, a, b);
	printf("%d %d\n", *a, *b);
	return (0);
}
