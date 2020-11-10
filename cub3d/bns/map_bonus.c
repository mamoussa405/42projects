/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 13:12:10 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:07:20 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

int		map_size(int fd)
{
	char	*line;
	int		size;

	size = 1;
	while (get_next_line(fd, &line) > 0)
	{
		exce_map(line);
		if (ft_strchr(line, '1') && !ft_strchr(line, 'R') &&
				!ft_strchr(line, 'C') && !ft_strchr(line, 'F'))
			size++;
		if ((!ft_strchr(line, '1') && !ft_strchr(line, 'R') &&
					!ft_strchr(line, 'C')) && size != 1)
			error("empty line in map");
		free(line);
	}
	if (!ft_strchr(line, '1'))
		error("empty line after map");
	exce_map(line);
	free(line);
	return (size);
}

int		map_assi(int fd)
{
	char	*line;
	int		res;
	int		i;

	res = 0;
	i = 0;
	while ((res = get_next_line(fd, &line)) >= 0)
	{
		if (ft_strchr(line, '1') && !ft_strchr(line, 'R') &&
				!ft_strchr(line, 'C') && !ft_strchr(line, 'F'))
		{
			line_tre(&line, line);
			if (ft_strchr(line, 'N') || ft_strchr(line, 'S') ||
					ft_strchr(line, 'W') || ft_strchr(line, 'E'))
				player_init(line);
			map.saver[i++] = ft_strdup(line);
			if (res == 0)
			{
				free(line);
				break ;
			}
		}
		free(line);
	}
	return (i);
}

void	map_tre(char **argv)
{
	int fd;
	int size;
	int i;

	fd = open(argv[1], O_RDONLY);
	size = map_size(fd);
	fd = open(argv[1], O_RDONLY);
	if (!(map.saver = malloc(sizeof(char*) * (size + 1))))
		error("allocation problem");
	i = map_assi(fd);
	map.saver[i] = NULL;
	map_size_cal(size);
}
