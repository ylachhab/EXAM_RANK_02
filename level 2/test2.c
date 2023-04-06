/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 02:46:51 by ylachhab          #+#    #+#             */
/*   Updated: 2023/03/09 08:19:35 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
# include <stdio.h>
#include <string.h>


int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int index = 0;
	if (ac == 3)
	{
		int	len1 = strlen(av[1]);
		while (i < len1)
		{
			index = 0;
			j = i + 1;
			while (j < len1)
			{
				if (av[1][j] == av[1][i])
					av[1][j] = '\0';
				j++;
			}
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
					index++;
				j++;
			}
			if (index != 0)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}