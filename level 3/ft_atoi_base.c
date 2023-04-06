/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 01:56:28 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/26 02:18:41 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int ret;
	int signal;

	i = 0;
	ret = 0;
	signal = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signal *= -1;
		i++;
	}
	while (str[i] != '\0' && str_base > 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			ret *= 10;
			ret += str[i] - '0';
		}
		if ((str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F'))
		{
			ret *= 16;
			ret += str[i] - '0';
		}
		i++;
		str_base--;
	}
	return (ret * signal);
}
int main()
{
	printf("%d", ft_atoi_base("0123a", 5));
}