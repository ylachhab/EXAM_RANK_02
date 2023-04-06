/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:04:03 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/27 16:08:35 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_print_hex(int nb)
{
	char c;
	char *base;

	base = "0123456789abcdef";
	if (nb > 16)
	{
		ft_print_hex(nb / 16);
		ft_print_hex(nb % 16);
	}
	if (nb >= 0 && nb < 16)
	{
		c = base[nb];
		write(1, &c, 1);
	}
}
int main(int ac, char **av)
{
	int nb;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		ft_print_hex(nb);
	}
	write(1, "\n", 1);
}