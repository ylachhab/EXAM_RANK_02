/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:11:47 by ylachhab          #+#    #+#             */
/*   Updated: 2023/04/05 13:47:50 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_size(int nb)
{
	int size;

	size = 1;
	if (nb < 0)
	{
		nb *= -1;
		size++;
	}
	while (nb >= 0)
	{
		nb /= 10;
		if (nb == 0)
			break ;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int	size;
	int i;

	size = ft_size(nbr);
	str = malloc (sizeof(char *) * size + 1);
	if (!str)
		return (0);
	str[size + 1] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	i = size - 1;
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
	printf("%s", ft_itoa(98456));
}