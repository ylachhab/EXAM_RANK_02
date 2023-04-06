/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:49:42 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/27 19:54:53 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int signal;

	signal = 0;
	i = 0;
	if (str[i] == '-')
	{
		signal *= -1;
		i++;
	}
	while (str[i] >= '9')
	{
		str
	}
}