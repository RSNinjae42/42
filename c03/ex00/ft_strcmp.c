/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:23:35 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/19 14:37:55 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while ((s1[x] && s2[x]) && s1[x] == s2[x])
	{
		x++;
	}
	if (s1[x] == s2[x])
		return (0);
	else
		return (s1[x] - s2[x]);
}

int main()
{
	char s1[] = "Holi";
	char s2[] = "holi7";
	printf("%d\n", strcmp(s1, s2));
	printf("%d",ft_strcmp(s1, s2));
}

