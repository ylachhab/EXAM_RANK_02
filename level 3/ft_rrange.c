/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:26:59 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/26 12:08:28 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int *str;
	int j;

	while( start <= end)
    {
        start++;
        i++;
    }
    j =  start - i;
	str = malloc(sizeof(int *) * i);
	if (!str)
		return(0);
	i = 0;
	if (end >= j)
	{
		while (end >= j)
		{
			str[i] = end;
			printf("%d\n", str[i]);
			end--;
			i++;
		}
	}
	else if (end < j)
	{
		while (end < j)
		{
			str[i] = end;
			printf("%d\n", str[i]);
			end++;
			i++;
		}
	}
	return (str);
}
int main()
{
    ft_rrange(1, -3);
}