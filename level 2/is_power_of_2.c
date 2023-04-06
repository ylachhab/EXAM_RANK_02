/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:44:15 by ylachhab          #+#    #+#             */
/*   Updated: 2023/04/06 10:09:16 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	unsigned int nbr = 1;

	while (nbr <= n)
	{
		if (nbr == n)
			return (1);
		nbr = nbr * 2;
	}
	return (0);
}
int main()
{
	printf("%d", is_power_of_2(32));
}
