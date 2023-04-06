/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:02:00 by ylachhab          #+#    #+#             */
/*   Updated: 2023/01/16 20:19:08 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	if (!str)
	{
		return (0);
		write(1, "\n", 1);
	}
	while (str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int i;

	i = ft_strlen(av[1]) - 1;
	if (ac == 2)
	{
		while (av[1][i])
		{
			write(1, &av[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
