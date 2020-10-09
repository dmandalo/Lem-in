/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:58:06 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:58:07 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t index;

	index = -1;
	while (++index < len)
		if (*(src + index))
			*(dst + index) = *(src + index);
		else
			while (index < len)
				*(dst + index++) = '\0';
	return (dst);
}
