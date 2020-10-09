/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:58:28 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:58:30 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *heystack, const char *needle, size_t len)
{
	size_t j;
	size_t index;

	if (ft_strlen(needle) == 0)
		return ((char *)heystack);
	index = 0;
	while (*heystack && index < len)
	{
		j = 0;
		if (*heystack == needle[j])
		{
			while (needle[j] && needle[j] == *(heystack + j)
				&& index + j < len)
				j++;
			if (needle[j] == '\0')
				return ((char *)heystack);
		}
		heystack++;
		index++;
	}
	return (NULL);
}
