/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:54:49 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:54:50 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n && *(char*)s1 == *(char*)s2)
	{
		s1++;
		s2++;
		n--;
	}
	return (n) ? (*(const unsigned char*)s1 - *(const unsigned char *)s2) : (0);
}
