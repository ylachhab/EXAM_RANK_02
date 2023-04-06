/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:17:46 by ylachhab          #+#    #+#             */
/*   Updated: 2023/04/05 17:29:52 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 #include <string.h>

int main(int ac, char **av)
{
	int i = 0;
	int len;
	int size = 0;
	char *str;
	if (ac == 2)
	{
		while(av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		len = strlen(av[1]) - i;
		while (av[1][len] != ' ' || av[1][len] != '\t')
			size++;
		str = malloc(sizeof(char *) * size + 1);
		if (!str)
			return ;
		while (size > 0)
		{
			str[i]
		}
	}
	write(1, "\n", 1);
}