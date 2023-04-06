/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:13:32 by ylachhab          #+#    #+#             */
/*   Updated: 2023/03/01 21:45:51 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print(int n)
{
	char c;

	if (n > 9)
	{
		ft_print(n / 10);
		ft_print(n % 10);
	}
	else if (n >= 0 && n <= 9)
	{
		c = n + 48;
		write(1, &c, 1);
	}
}

int main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_print(i);
		i++;
		write(1, "\n", 1);
	}
}
