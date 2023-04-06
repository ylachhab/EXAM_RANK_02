/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:54:44 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/26 00:29:20 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
# include <stdio.h>
#include <stdlib.h>

int is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char const *av[])
{
	int nb;
	int i;
	int sum;

	i = 0;
	sum = 0;
	nb = atoi(av[1]);
	if (ac == 2)
	{
		while (i <= nb)
		{
			if (is_prime(i) == 1)
				sum += i;
			i++;
		}
		printf("%d", sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return 0;
}
