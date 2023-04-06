/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 05:07:05 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/26 07:34:18 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}
int main()
{
	t_list a;
	t_list b;
	t_list c;
	t_list d;

	a.data = "salam";
	b.data = "ahlan";
	c.data = "123";
	d.data = "fin";
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = 0;
	printf("%d", ft_list_size(&a));
}