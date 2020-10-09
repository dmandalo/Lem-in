/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:52:51 by dmandalo          #+#    #+#             */
/*   Updated: 2019/09/18 17:52:52 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_capitalize(char *s)
{
	char	*new;
	int		i;

	if (!s)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	new[0] = ft_toupper(s[0]);
	i = 0;
	while (*(s + ++i))
		if (!ft_isalnum(s[i - 1]) && ft_isalnum(s[i]))
			new[i] = ft_toupper(s[i]);
		else
			new[i] = s[i];
	return (new);
}
