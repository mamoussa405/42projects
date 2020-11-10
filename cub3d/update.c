/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 13:05:08 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 20:26:40 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "objects.h"

void	fro_back(void)
{
	tile.x = 0;
	tile.y = 0;
	if (go.front == 1 && cor_calc(player.x +
				(20 * cos(player.rotangle + ((FOV / 2) * RAD)))
				, player.y + (20 * sin(player.rotangle +
						((FOV / 2) * RAD)))) == 0)
	{
		player.d_x += cos(player.rotangle + ((FOV / 2) * RAD)) * 10;
		player.d_y += sin(player.rotangle + ((FOV / 2) * RAD)) * 10;
	}
	if (go.back == 1 && cor_calc(player.x -
				(20 * cos(player.rotangle + ((FOV / 2) * RAD))),
				player.y - (20 * sin(player.rotangle +
						((FOV / 2) * RAD)))) == 0)
	{
		player.d_x -= cos(player.rotangle + ((FOV / 2) * RAD)) * 10;
		player.d_y -= sin(player.rotangle + ((FOV / 2) * RAD)) * 10;
	}
}

void	turn_direction(void)
{
	tile.x = 0;
	tile.y = 0;
	if (go.right == 1)
		player.rotangle += 5 * RAD;
	if (go.left == 1)
		player.rotangle -= 5 * RAD;
}

void	up_down(void)
{
	static float save;

	tile.x = 0;
	tile.y = 0;
	if (go.up == 1 && save <= window.height)
		save += 20;
	if (go.down == 1 && save >= -window.height)
		save -= 20;
	player.up = save;
}

void	update_assi(void)
{
	if (go.pv_left == 1 || go.pv_right == 1)
	{
		pv_mov();
		map_rendring();
		mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img_ptr, 0, 0);
	}
	if (go.esc == 1)
	{
		mlx_destroy_image(mlx.mlx_ptr, mlx.img_ptr);
		mlx_destroy_window(mlx.mlx_ptr, mlx.win_ptr);
		exit(0);
	}
}

int		update(void)
{
	if (go.front == 1 || go.back == 1)
	{
		fro_back();
		map_rendring();
		mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img_ptr, 0, 0);
	}
	if (go.left == 1 || go.right == 1)
	{
		turn_direction();
		map_rendring();
		mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img_ptr, 0, 0);
	}
	if (go.up == 1 || go.down == 1)
	{
		up_down();
		map_rendring();
		mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img_ptr, 0, 0);
	}
	update_assi();
	return (0);
}
