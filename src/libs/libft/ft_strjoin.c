/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:56:53 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:56:54 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*tempo;
	int		result_len;

	if (!s1 || !s2)
		return (NULL);
	result_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(result = (char *)malloc(sizeof(*s1) * result_len)))
		return (NULL);
	tempo = result;
	while (*s1)
		*(result++) = *(s1++);
	while (*s2)
		*(result++) = *(s2++);
	*result = '\0';
	return (tempo);
}
