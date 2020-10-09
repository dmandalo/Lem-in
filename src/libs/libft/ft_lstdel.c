/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:53:53 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:53:54 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tempo;
	t_list *tmp_list;

	if (!alst || !(*alst))
		return ;
	tempo = *alst;
	while (tempo)
	{
		tmp_list = tempo->next;
		ft_lstdelone(&(tempo), del);
		tempo = tmp_list;
	}
	*alst = NULL;
}
