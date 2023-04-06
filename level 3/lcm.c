/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:35:19 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/27 07:40:37 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int nb;

    if (a == 0 || b == 0)
        return (0);
    if (a > b)
        nb = a;
    else
        nb = b;
    while (1)
    {
        if (nb % a == 0 && nb % b == 0)
            return (nb);
        nb++;
    }
}
int main()
{
    printf("%d", lcm(5,3));
}