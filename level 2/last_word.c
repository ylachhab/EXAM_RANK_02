/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:19:12 by ylachhab          #+#    #+#             */
/*   Updated: 2023/03/09 05:47:06 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	if (!str)
	{
		return (0);
		write(1, "\n", 1);
	}
	while(str[i])
		i++;
	return (i);
}

// int main(int ac, char **av)
// {
// 	int i;

// 	i = ft_strlen(av[1]) - 1;
// 	if (ac == 2)
// 	{
// 		while(av[1][i])
// 		{
// 			if (av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
// 				i--;
// 			write(1, &av[1][i], 1);
// 			i--;
// 		}
// 	}
// 	write(1, "\n", 1);
// }

int		main(int ac, char **av)
{
	int len;
	int i;
	if (ac == 2)
	{
		len = ft_strlen(av[1]) - 1;
		while (av[1][len] == ' ' || av[1][len] == '\t')
			len--;
		i = len;
		while (av[1][len])
		{
			if (av[1][len - 1] == ' ')
				break ;
			len--;
		}
		while (i >= len)
		{
			write(1, &av[1][len], 1);
			len++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
