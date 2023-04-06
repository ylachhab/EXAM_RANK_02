/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftrrange.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:22:14 by ylachhab          #+#    #+#             */
/*   Updated: 2023/01/20 00:32:00 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int *ret;
	int len;

	len = (end - start) + 1;
	ret = (int *)malloc(sizeof(int) * len);
	if (!ret)
		return (0);
	while (len > 0)
	{
		ret[len] = start + len;
		len--;
	}
	return (ret);
}
int main()
{
	printf("%s", ft_rrange(1, 3));
}
