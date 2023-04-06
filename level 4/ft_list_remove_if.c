/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:54:04 by ylachhab          #+#    #+#             */
/*   Updated: 2023/04/05 16:48:41 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

int cmp(void *data, void *list)
{
	char *s1;
	char *s2;
	int i = 0;
	int j = 0;

	s1 = (char *)data;
	s2 = (char *)list;
	while (s1[i] || s2[j])
	{
		if (s1[i] != s2[j])
			return (1);
		i++;
		j++;
	}
	return (0);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	if (!begin_list || !cmp)
		return ;
	if (!cmp((*begin_list)->data, data_ref))
	{
		(*begin_list) = (*begin_list)->next;
		return ;
	}
	while (begin_list)
	{
		tmp = (*begin_list);
		begin_list = &(*begin_list)->next;
		if ((*begin_list) && !cmp((*begin_list)->data, data_ref))
		{
			tmp->next = (*begin_list)->next;
			begin_list = &tmp;
			return ;
		}
	}
}

int main()
{
	t_list s1, s2, s3;
	t_list *head;

	s1.data = strdup("hello");
	s2.data = strdup("abc");
	s3.data = strdup("20");

	s1.next = &s2;
	s2.next = &s3;
	s3.next = NULL;

	head = &s1;
	ft_list_remove_if(&head, "hello", cmp);
	while (head)
	{

		puts(head->data);
		head = head->next;
	}
}