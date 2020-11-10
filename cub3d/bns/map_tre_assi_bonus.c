/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_tre_assi_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:32:18 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:07:26 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

void	line_tre(char **line, char *c_line)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (c_line[i])
	{
		while (c_line[i] == ' ')
			i++;
		line[0][j++] = c_line[i++];
	}
	line[0][j] = '\0';
}

void	map_size_cal(int size)
{
	int i;

	i = 0;
	map.height = size;
	while (map.saver[0][i])
	{
		i++;
	}
	map.width = i;
}

void	exce_map_assi(char *line)
{
	if (ft_strchr(line, 'E') && ft_strchr(line, 'A'))
	{
		map.l_num++;
		map.et_p = ft_strdup(line);
	}
	else if (ft_strchr(line, 'S') && !ft_strchr(line, '1'))
	{
		map.l_num++;
		map.spt_p = ft_strdup(line);
	}
	else if (ft_strchr(line, 'F'))
	{
		map.l_num++;
		map.fc_p = ft_strdup(line);
	}
	else if (ft_strchr(line, 'C'))
	{
		map.l_num++;
		map.cc_p = ft_strdup(line);
	}
	else if (*line == '\0')
		(void)line;
	else if (!ft_strchr(line, '1'))
		error("not valid file");
}

void	line_error(void)
{
	if (map.l_num > 8)
		error("duplicate info.");
}

int		exce_map(char *line)
{
	if (ft_strchr(line, 'R'))
	{
		map.l_num++;
		map.res = ft_strdup(line);
	}
	else if (ft_strchr(line, 'N') && ft_strchr(line, 'O'))
	{
		map.l_num++;
		map.nt_p = ft_strdup(line);
	}
	else if (ft_strchr(line, 'S') && ft_strchr(line, 'O'))
	{
		map.l_num++;
		map.st_p = ft_strdup(line);
	}
	else if (ft_strchr(line, 'W') && ft_strchr(line, 'E'))
	{
		map.l_num++;
		map.wt_p = ft_strdup(line);
	}
	else
		exce_map_assi(line);
	line_error();
	return (0);
}
