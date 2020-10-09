/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:54:12 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:54:13 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *tempo;

	if (!(tempo = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		tempo->content = NULL;
		tempo->content_size = 0;
	}
	else
	{
		if (!(tempo->content = malloc(content_size)))
		{
			free(tempo);
			return (NULL);
		}
		ft_memcpy(tempo->content, content, content_size);
		tempo->content_size = content_size;
	}
	tempo->next = NULL;
	return (tempo);
}
