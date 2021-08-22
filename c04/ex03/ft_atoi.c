/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <rfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:02:01 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/22 16:42:10 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	x;
	int	total;
	int	nbr;

	nbr = 1;
	x = 0;
	total = 0;
	while (str[x] == ' ' || str[x] == '\n' || str[x] == '\r' || str[x] == '\f' || str[x] == '\t' || str[x] == '\v' || str[x] == '+')
		x++;
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			nbr *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		total *= 10;
		total += (str[x] -48);
		x++;
	}
	return (total * nbr);
}