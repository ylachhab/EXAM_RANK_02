/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:05:19 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/27 12:26:06 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <stdio.h>

int main(int ac, char **av)
{
	int a;
	int b;
	int tmp;
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		if (a <= 0 || b <= 0)
		{
			printf("\n");
			return (0);
		}
		while (a != 0)
		{
			tmp = a;
			a = b % a;
			b = tmp;
		}
		printf("%d", tmp);
	}
	printf("\n");
}