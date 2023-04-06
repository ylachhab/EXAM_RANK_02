/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_prime.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:43:50 by ylachhab          #+#    #+#             */
/*   Updated: 2023/04/05 11:29:22 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// int	ft_prime(int nbr)
// {
// 	int	c;
// 	int i = 0;

// 	c = 2;
// 	while (c <= nbr)
// 	{
// 		if (nbr % c == 0)
// 			i++;
// 		c++;
// 	}
// 	if (i == 1)
// 		return (1);
// 	else
// 		return (0);
// }

int main(int ac, char **av)
{
	int nbr;
	int ret;
	int b;

	b = 2;
	if (ac == 2)
	{
		if (nbr < 0)
		{
			printf("\n");
			exit (0);
		}
		nbr = atoi(av[1]);
		while (nbr >= b)
		{
			if (nbr % b == 0)
			{
				printf("%d", b);
				if (nbr == b)
					break ;
				printf("*");
				nbr /= b;
				b = 2;
			}
			b++;
		}
	}
	printf("\n");
}