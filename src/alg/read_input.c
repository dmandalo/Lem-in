/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 23:05:05 by dmandalo          #+#    #+#             */
/*   Updated: 2020/09/14 15:48:32 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

static char	*get_new_line(char **tail, char *newline)
{
	char *line0;
	char *line;
	char *p;
	char *new_tail;

	if (!(line0 = (char *)malloc(sizeof(char) * (newline - *tail + 1))))
		error(errno);
	line = line0;
	p = *tail;
	while (p != newline)
		*line++ = *p++;
	*line = 0;
	if (!*++p)
		new_tail = NULL;
	else if (!(new_tail = ft_strdup(p)))
		error(errno);
	free(*tail);
	*tail = new_tail;
	return (line0);
}

static char	*read_more(char *tail)
{
	char	buf[BUFF_SIZE + 1];
	char	*p;
	int		r;

	if ((r = read(0, buf, BUFF_SIZE)) < 0)
		error(errno);
	buf[r] = 0;
	if (tail)
	{
		p = tail;
		if (!(tail = ft_strjoin(tail, r ? buf : "\n")))
			error(errno);
		free(p);
	}
	else
	{
		if (!r)
			return (NULL);
		if (!(tail = ft_strdup(buf)))
			error(errno);
	}
	return (tail);
}

static char	*find_newline(char *s)
{
	if (s)
		while (*s)
			if (*s++ == '\n')
				return (s - 1);
	return (NULL);
}

char		*read_input(void)
{
	static char	*tail = NULL;
	char		*newline;

	while (1)
	{
		if ((newline = find_newline(tail)))
			return (get_new_line(&tail, newline));
		else if (!(tail = read_more(tail)))
			return (NULL);
	}
}
