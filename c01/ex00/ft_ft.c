/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <rfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:55:56 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/13 13:33:47 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
    int entero;
    int *puntero;
    puntero = &entero;
    ft_ft(puntero);
	printf("%d", **puntero);
    return 0;
}
