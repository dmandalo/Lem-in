/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:59:22 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:59:24 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char const *tail;

	if (s == NULL)
		return (NULL);
	while (WHITESPACED(*s))
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	tail = s + ft_strlen(s) - 1;
	while (WHITESPACED(*tail))
		tail--;
	return (ft_strsub(s, 0, tail - s + 1));
}
