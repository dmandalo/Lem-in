/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:49:54 by dmandalo          #+#    #+#             */
/*   Updated: 2020/08/17 16:43:22 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char const *s)
{
	long	n;
	int		sign;

	while ((*s >= 9 && *s <= 13) || *s == 32)
		++s;
	sign = (*s == '-' ? -1 : 1);
	if (*s == '-' || *s == '+')
		++s;
	n = 0;
	while (*s >= '0' && *s <= '9')
	{
		n = n * 10 + (*s - '0');
		if (n < 0)
			return (sign > 0 ? -1 : 0);
		++s;
	}
	return ((int)(n * sign));
}
