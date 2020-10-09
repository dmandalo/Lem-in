/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:59:12 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:59:14 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *heystack, const char *needle)
{
	int j;

	if (ft_strlen(needle) == 0)
		return ((char *)heystack);
	while (*heystack)
	{
		j = 0;
		if (*heystack == needle[j])
		{
			while (needle[j] && needle[j] == *(heystack + j))
				j++;
			if (needle[j] == '\0')
				return ((char *)heystack);
		}
		heystack++;
	}
	return (NULL);
}
