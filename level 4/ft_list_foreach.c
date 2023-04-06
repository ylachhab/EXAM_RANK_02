/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:09:00 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/28 23:49:01 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (!begin_list)
		return ;
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}
void ft_prt(void *str)
{
	*(char *)str += 1;

}
int main()
{
	t_list s1, s2, s3;

	s1.data = strdup("hello");
	s2.data = strdup("abc");
	s3.data = strdup("123");

	s1.next = &s2;
	s2.next = &s3;
	s3.next = NULL;

	ft_list_foreach(&s1, ft_prt);
	printf("%s", s3.data);
}