/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 11:10:43 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:06:45 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

void	init_sprite(int x, int y)
{
	t_sprite *new;

	new = ft_lstnew();
	new->x = (x * TILE_SIZE) + (TILE_SIZE / 2);
	new->y = (y * TILE_SIZE) + (TILE_SIZE / 2);
	ft_lstadd_back(&player.head, new);
}

void	player_checker(void)
{
	int x;
	int y;
	int cmp;

	x = 1;
	y = 1;
	cmp = 0;
	while (y < map.height - 1)
	{
		while (x < map.width - 1)
		{
			if (map.saver[y][x] == 'N' || map.saver[y][x] == 'W' ||
					map.saver[y][x] == 'S' || map.saver[y][x] == 'E')
				cmp++;
			else if (map.saver[y][x] == '2')
				init_sprite(x, y);
			x++;
		}
		x = 1;
		y++;
	}
	if (cmp != 1)
		error("multipleplayer");
}

void	error_checker(void)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (x < map.width)
	{
		if (map.saver[0][x] != '1' || map.saver[map.height - 1][x] != '1')
			error("map must be closed");
		x++;
	}
	while (y < map.height - 1)
	{
		if (map.saver[y][0] != '1' || map.saver[y][map.width - 1] != '1')
			error("map must be closed");
		y++;
	}
	player_checker();
}
