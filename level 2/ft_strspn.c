/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:14:02 by ylachhab          #+#    #+#             */
/*   Updated: 2023/03/09 02:43:49 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	int j = 0;
	int index = 0;

	while(s[i])
	{
		while(accept[j])
		{
			if (s[i] == accept[j])
				index++;
			j++;
		}
		if (index == 0)
			return (i);
		index = 0;
		j = 0;
		i++;
	}
	return (i);
}

int main()
{
	printf("%lu\n", strspn("hello world", "hw"));
	printf("%zu\n", ft_strspn("hello world", "hw"));
}
