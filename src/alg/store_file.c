/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 23:05:05 by dmandalo          #+#    #+#             */
/*   Updated: 2020/09/14 15:50:26 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void		print_file(t_input *map)
{
	while (map->next)
	{
		ft_putstr(map->line);
		ft_putchar('\n');
		free(map->line);
		map = map->next;
		free(map->prev);
	}
	ft_putstr(map->line);
	ft_putstr("\n\n");
	free(map->line);
	free(map);
}

static int	identify_line(char *line)
{
	if (*line == '#')
	{
		if (ft_strequ(line, "##start"))
			return (START);
		if (ft_strequ(line, "##end"))
			return (END);
		return (COMMENT);
	}
	while (*line)
	{
		if (*line == ' ')
			return (ROOM);
		if (*line == '-')
			return (LINK);
		++line;
	}
	return (OTHER);
}

t_input		*store_file(t_input *prev)
{
	t_input		*new;

	if (!(new = (t_input *)malloc(sizeof(t_input))))
		error(errno);
	if (!(new->line = read_input()))
	{
		free(new);
		return (NULL);
	}
	new->type = identify_line(new->line);
	new->prev = prev;
	new->next = store_file(new);
	return (new);
}
