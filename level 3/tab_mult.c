/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:36:09 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/27 19:47:21 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char c;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
}

int main(int ac, char **av)
{
	int i = 1;
	int j = 1;
	int nb;
	int new;
	char c;
	char f;
	char div;
	if (ac == 2)
	{
		nb = atoi(av[1]);
		while (i <= 9)
		{
			f = j + 48;
			write(1, &f, 1);
			write(1, " x ", 4);
			ft_putnbr(nb);
			write(1, " = ", 3);
			new = nb * i;
			ft_putnbr(new);
			write(1, "\n", 1);
			i++;
			j++;
		}
	}
	else
		write(1, "\n", 1);
}