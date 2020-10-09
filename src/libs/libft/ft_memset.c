/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:55:07 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:55:08 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tempo;

	tempo = (unsigned char *)b;
	while (len > 0)
	{
		*tempo = (unsigned char)c;
		len--;
		tempo++;
	}
	return (b);
}
