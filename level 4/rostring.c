/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 04:54:42 by ylachhab          #+#    #+#             */
/*   Updated: 2023/03/01 06:15:31 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int start;
	int end;
	if (ac == 2)
	{
		j = strlen(av[1]);
		if (av[1])
		{
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
			start = i;
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			{
				i++;
			}
			end = i;
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
			while (av[1][i])
			{
				write(1, &av[1][i], 1);
				i++;
				j--;
			}
			write(1, " ", 1);
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
		}
	}
	else if (ac > 2)
	{
		while (av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
			j--;
		}
	}
	write(1, "\n", 1);
}