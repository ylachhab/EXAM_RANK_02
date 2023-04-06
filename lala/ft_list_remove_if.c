/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:56:25 by ylachhab          #+#    #+#             */
/*   Updated: 2023/04/05 16:41:41 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *first;

	if (! begin_list || !data_ref || !*cmp)
		return ;
	if (cmp((*begin_list)->data, data_ref) == 0)
	{
		(*begin_list) = (*begin_list)->next;
		return ;
	}
	tmp = *begin_list;
	first = tmp;
	while (tmp)
	{
		if (cmp(tmp->data, data_ref) == 0)
		{
			free (tmp->data);
			first->next = tmp->next;
		}
		first = tmp;
		tmp = tmp->next;
	}
}