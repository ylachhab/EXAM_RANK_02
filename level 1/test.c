/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:59:39 by ylachhab          #+#    #+#             */
/*   Updated: 2023/01/16 14:07:22 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_repeat(char d)
{
	int r;

	if (d >= 'a' && d <= 'z')
		r  = d - 'a' + 1;
	else if (d >= 'A' && d <= 'Z')
		r = d - 'A' + 1;
	else
		r = 1;
	return (r);
}

int main(int ac, char **av)
{
	int i;
	int repeat;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			repeat = ft_repeat(av[1][i]);
			while(repeat--)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
