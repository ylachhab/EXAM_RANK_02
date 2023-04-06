/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:39:50 by ylachhab          #+#    #+#             */
/*   Updated: 2023/03/09 02:40:40 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;
	char *c;
	c = (char *)s1;
	while (c[i])
	{
		j = 0;
		while (s2[j])
		{
			if (c[i] == s2[j])
				return (&c[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
	printf("%s\n", strpbrk("hello world", "dl"));
	printf("%s\n", ft_strpbrk("hello world", "dl"));
}
