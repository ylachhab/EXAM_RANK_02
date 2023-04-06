/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 06:21:49 by ylachhab          #+#    #+#             */
/*   Updated: 2023/03/01 06:30:46 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int tmp;
	while (i <= (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
int main()
{
	int s[] = {10, 56, 9, 976, 3255};
	sort_int_tab(s, 5);
	printf("%d", *s);
}