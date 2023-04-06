/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:51:26 by ylachhab          #+#    #+#             */
/*   Updated: 2023/03/09 06:12:22 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// int main(int ac, char **av)
// {
// 	int i = 0;

// 	if (ac == 2)
// 	{
// 		while (av[1][i])
// 		{
// 			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
// 			{
// 				write(1, "_", 1);
// 				av[1][i] += 32;
// 			}
// 			write(1, &av[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }
unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}
int main()
{
	printf("%c", reverse_bits(48));
}