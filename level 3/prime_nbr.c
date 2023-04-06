/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prime_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 23:02:34 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/26 00:29:34 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
	int i;
	int ret;
	int signel;

	i = 0;
	ret = 0;
	signel = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signel *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		ret *= 10;
		ret += str[i] - '0';
		i++;
	}
	return (ret * signel);
}

void ft_putnbr(int nb)
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

int is_prime(int nb)
{
	int i = 2;

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

int main(int ac, char **av)
{
	int nb;
	int i;
	int sum;

	i = 0;
	sum = 0;
	nb = ft_atoi(av[1]);
	if (ac == 2)
	{
		while (i <= nb)
		{
			if (is_prime(i) == 1)
				sum += i;
			i++;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
