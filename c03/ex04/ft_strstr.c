/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:26:29 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/18 20:31:38 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	while (str[x])
	{
		y = 0;
		while (str[x + y] && to_find[y] && str[x + y] == to_find[y])
			y++;
		if (!to_find[y])
			return (str + x);
		x++;
	}
	return (0);
}
