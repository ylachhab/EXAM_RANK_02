/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:45:30 by ylachhab          #+#    #+#             */
/*   Updated: 2023/03/09 00:00:16 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int letter(char c)
{
	int repeat;

	if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else
		repeat = 1;
	return (repeat);
}

int main(int ac, char **av)
{
	int i;
	int repeat;

	if (ac == 2)
	{
		while (av[1][i])
		{
			repeat = letter(av[1][i]);
			while(repeat--)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
