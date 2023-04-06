/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:05:19 by ylachhab          #+#    #+#             */
/*   Updated: 2023/03/01 22:06:40 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '*')
			printf("%d", atoi(av[1]) * atoi(av[3]));
		else if (av[2][0] == '/')
			printf("%d", atoi(av[1]) / atoi(av[3]));
		else if (av[2][0] == '+')
			printf("%d", atoi(av[1]) + atoi(av[3]));
		else if (av[2][0] == '-')
			printf("%d", atoi(av[1]) - atoi(av[3]));
		else if (av[2][0] == '%')
			printf("%d", atoi(av[1]) % atoi(av[3]));
	}
	printf("\n");
}
