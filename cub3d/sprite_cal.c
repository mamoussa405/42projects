/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_cal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:40:03 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 20:20:57 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "objects.h"

void	sprite_re_assi(int i, int j, int *add)
{
	player.sp_color = add[((int)player.sp_x * (j * (int)player.sp_y /
			(int)player.sp_size)) + (i * (int)player.sp_x /
			(int)player.sp_size)];
	if (player.sp_color != 0)
	{
		player.sp_color = sp_shadow_effect(player.sp_color,
				player.dont_edit->dis);
		mlx_img_put(player.sprite_x + i, player.sprite_y + j,
				player.sp_color);
	}
}

void	sprite_rend(void)
{
	int i;
	int j;
	int *add;
	int a;

	i = -1;
	j = -1;
	add = (int*)mlx_get_data_addr(mlx.img_sp, &a, &a, &a);
	while (++i < player.sp_size - 1)
	{
		if (player.sprite_x + i < 0 || player.sprite_x + i > window.width)
			continue;
		if (player.dont_edit->dis > window.zbuffer[(int)player.sprite_x + i])
			continue;
		j = -1;
		while (++j < player.sp_size - 1)
		{
			if (player.sprite_y + j < 0 || player.sprite_y + j > window.height)
				continue;
			sprite_re_assi(i, j, add);
		}
	}
}

void	sprite_cal(void)
{
	player.sp_angle = atan2(player.dont_edit->y - player.y,
			player.dont_edit->x - player.x);
	while (player.sp_angle - player.angle_v > M_PI)
		player.sp_angle -= 2 * M_PI;
	while (player.sp_angle - player.angle_v < -M_PI)
		player.sp_angle += 2 * M_PI;
	player.ps_angle = player.sp_angle - player.angle_v;
	if (window.height > window.width)
		player.sp_size = (window.height / player.dont_edit->dis) * TILE_SIZE;
	else
		player.sp_size = (window.width / player.dont_edit->dis) * TILE_SIZE;
	player.sprite_y = (window.height / 2) - (player.sp_size / 2) + player.up;
	player.sprite_x = ((player.ps_angle * window.width / (FOV * RAD)) +
			(window.width / 2 - player.sp_size / 2));
	sprite_rend();
}
