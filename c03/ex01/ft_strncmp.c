/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:26:51 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/18 21:17:24 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x <= n && (s1[x] && s2[x]) && s1[x] == s2[x])
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
	/*
	unsigned int n = 2;
    char s1[] = "";
    char s2[] = "";
	printf("%d ", strncmp(s1, s2, n));
    printf("%d",ft_strncmp(s1, s2, n));
*/
	
	char 	str1[] = "\xfe";
	char	*str2[4] = { "\x01", "Cba", "B", "\x42 ana"};
	int	result;
	int	n = 1;
	int	a = 0;
  	for (a = 0; a < 4; a++)
	{
		printf("str1: %s\n", str1);
		printf("str2: %s\n", str2[a]);
		printf("n   : %d\n", 5);
		printf("=================================\n");
		result = ft_strncmp(str2[a], str1, n);
		printf("ft_strncmp(str1, str2): %d\n", result);
		printf("   strncmp(str1, str2): %d\n", strncmp( str2[a], str1, n));
		printf("=================================\n");
		printf("\n");
	}
}
