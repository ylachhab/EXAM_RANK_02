/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 03:09:14 by ylachhab          #+#    #+#             */
/*   Updated: 2023/03/01 04:44:57 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	int end;
	int start;
	int count;

	if (ac == 2)
	{
		i = strlen(av[1]);
		while (i-- >= 0)
		{
			while (av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
				i--;
			end = i;
			while (av[1][i] && av[1][i] != '\t' && av[1][i] != ' ')
				i--;
			start = i + 1;
			count = start;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if (count != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
