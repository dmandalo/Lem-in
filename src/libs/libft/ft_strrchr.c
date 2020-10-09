/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:58:35 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:58:55 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int index;

	index = ft_strlen(s);
	s += index;
	while (index >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		index--;
	}
	return (NULL);
}
