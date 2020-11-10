/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_rendring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:18:55 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 18:33:49 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "objects.h"
#include "mlx.h"
#include "cub3d.h"

int		map_rend_assi(int x, int y, int j)
{
	while (x < map.width)
	{
		if (map.saver[y][x] == '1')
			tile.x += TILE_SIZE;
		else if (map.saver[y][x] == '0')
			tile.x += TILE_SIZE;
		else if (map.saver[y][x] == 'N' || map.saver[y][x] == 'S' ||
				map.saver[y][x] == 'E' || map.saver[y][x] == 'W')
		{
			j = 1;
			tile.x += TILE_SIZE;
			player.tilex = tile.x - (TILE_SIZE / 2);
			player.tiley = tile.y - (TILE_SIZE / 2);
		}
		else if (map.saver[y][x] == '2')
			tile.x += TILE_SIZE;
		else
			error("not a valid map");
		x++;
	}
	return (j);
}

int		map_rendring(void)
{
	int j;
	int x;
	int y;

	x = 0;
	y = 0;
	j = 0;
	mlx_destroy_image(mlx.mlx_ptr, mlx.img_ptr);
	mlx_clear_window(mlx.mlx_ptr, mlx.win_ptr);
	mlx.img_ptr = mlx_new_image(mlx.mlx_ptr, window.width, window.height);
	while (y < map.height)
	{
		tile.y += TILE_SIZE;
		j = map_rend_assi(x, y, j);
		tile.x = 0;
		x = 0;
		y++;
	}
	if (j == 1)
		fov_redring();
	return (0);
}
