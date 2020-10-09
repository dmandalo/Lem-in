/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:53:06 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:53:06 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_foreach(int *tab, unsigned int length, void (*f)(int))
{
	if (tab == NULL || f == NULL)
		return ;
	while (length--)
		f(*tab++);
}
