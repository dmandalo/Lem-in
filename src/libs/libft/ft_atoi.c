/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:51:31 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:51:33 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			index;
	int			sign;
	long long	result;
	long long	tempo;

	sign = 1;
	index = 0;
	result = 0;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-')
		sign = -1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		tempo = result;
		result = result * 10 + (str[index++] - 48);
		if (tempo > result)
			return (sign < 0) ? 0 : -1;
	}
	return (sign * (int)result);
}
