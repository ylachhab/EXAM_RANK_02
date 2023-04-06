/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:12:00 by ylachhab          #+#    #+#             */
/*   Updated: 2023/01/19 21:22:43 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i = 0;
	int ret = tab[i];

	while (i < len)
	{
		if (ret < tab[i])
			ret = tab[i];
		i++;
	}
	return (ret);
}