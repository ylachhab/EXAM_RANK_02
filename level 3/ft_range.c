/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 08:04:17 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/26 10:24:37 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int *str;
    int i = 0;
    int j;

    while( start <= end)
    {
        start++;
        i++;
    }
    j =  start - i;
    str = malloc(sizeof(int *) * i);
    if (!str)
        return (0);
    i = 0;
    if (end >= j)
    {
        while (end >= j)
        {
            str[i] = j;
            printf("%d\n", str[i]);
            j++;
            i++;
        }
    }
    else if (end <= j)
    {
        while (end <= j)
        {
            str[i] = j;
            printf("%d\n", str[i]);
            j--;
            i++;
        }
    }
    return (str);
}
int main()
{
    ft_range(0, -3);
}