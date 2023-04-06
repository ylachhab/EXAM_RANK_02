/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:22:58 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/26 13:32:49 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(char *s)
{
	int i = 0;

	while(s[i] != '\0')
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int size;

	if (ac == 3)
	{
		size = ft_strlen(av[1]);
		if (av[1] && av[2])
		{
			while (av[1][i] && av[2][j])
			{
				if (av[2][j] == av[1][i])
					i++;
				j++;
			}
			if (i == size)
				write(1, "1", 1);
			else if (i != size)
				write(1, "0", 1);
		}
	}
	write(1, "\n", 1);
}