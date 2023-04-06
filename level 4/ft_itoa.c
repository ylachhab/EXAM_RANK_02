/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:19:26 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/28 22:30:05 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_len(int nb)
{
	int i;

	i = 0;
	while(nb >= 1)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int i;
	int len;

	if (nbr < 0)
		nbr *=-1;
	len = ft_len(nbr);
	str = malloc(sizeof(char *) * len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	i = len - 1;
	while (i >= 0)
	{
		str[i] = (nbr % 10) + 48;
		nbr /= 10;
		i--;
	}
	return (str);
}
int main()
{
	printf("%s", ft_itoa(1337));
}