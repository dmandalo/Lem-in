/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandalo <dmandalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:43:47 by dmandalo          #+#    #+#             */
/*   Updated: 2020/09/14 15:36:24 by dmandalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	error(int error_type)
{
	if (error_type == ERR_ARGS)
		ft_putstr("ERROR: wrong arguments (use -h)\n");
	else if (error_type == ERR_ROOM)
		ft_putstr("ERROR: invalid room\n");
	else if (error_type == ERR_ANTS)
		ft_putstr("ERROR: invalid ants\n");
	else if (error_type == ERR_ENDS)
		ft_putstr("ERROR: invalid ##start and/or ##end\n");
	else if (error_type == ERR_DUPE)
		ft_putstr("ERROR: duplicate room name and/or coordinates\n");
	else if (error_type == ERR_PATH)
		ft_putstr("ERROR: no paths found\n");
	else
		perror("ERROR");
	exit(error_type);
}

void	error_vis(const char *error_msg)
{
	if (error_msg)
	{
		ft_putstr(error_msg);
		write(1, "\n", 1);
	}
	exit(-1);
}
