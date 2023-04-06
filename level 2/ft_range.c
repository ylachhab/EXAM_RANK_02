/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 00:16:08 by ylachhab          #+#    #+#             */
/*   Updated: 2023/01/20 00:21:37 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int  *ret;
	int i = 0;
	int len;

	len = (end - start) + 1;
	ret = malloc(sizeof(int) * i);
	if (!ret)
		return (0);
	while (i < len)
	{
		ret[i] = start + i;
		i++;
	}
	return (ret);	
}
