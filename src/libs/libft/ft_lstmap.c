/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:54:08 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:54:08 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstclear(t_list *list)
{
	while (list)
	{
		free(list->content);
		free(list);
		list = list->next;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*tempo;
	t_list	*tmp_new;

	if (!lst || !f)
		return (NULL);
	if (!(result = f(lst)))
		return (NULL);
	tempo = result;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp_new = f(lst)))
		{
			ft_lstclear(result);
			return (NULL);
		}
		tempo->next = tmp_new;
		tempo = tempo->next;
		lst = lst->next;
	}
	return (result);
}
