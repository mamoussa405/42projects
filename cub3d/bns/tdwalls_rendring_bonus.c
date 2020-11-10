/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tdwalls_rendring_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 15:54:27 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:08:14 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

void	texture_s_assi(void)
{
	int unused;

	if (wall.hits_ver == 1 && ray.is_left == 1)
	{
		wall.xpm_data = (int *)mlx_get_data_addr(mlx.img_wtex,
				&unused, &unused, &unused);
		wall.y_img = wall.y_wimg;
		wall.x_img = wall.x_wimg;
	}
	else if (wall.hits_ver == 1 && ray.is_right == 1)
	{
		wall.xpm_data = (int *)mlx_get_data_addr(mlx.img_etex,
				&unused, &unused, &unused);
		wall.y_img = wall.y_eimg;
		wall.x_img = wall.x_eimg;
	}
}

void	texture_side(void)
{
	int unused;

	if (wall.hits_hor == 1 && ray.is_up == 1)
	{
		wall.xpm_data = (int *)mlx_get_data_addr(mlx.img_ntex,
				&unused, &unused, &unused);
		wall.y_img = wall.y_nimg;
		wall.x_img = wall.x_nimg;
	}
	else if (wall.hits_hor == 1 && ray.is_down == 1)
	{
		wall.xpm_data = (int *)mlx_get_data_addr(mlx.img_stex,
				&unused, &unused, &unused);
		wall.y_img = wall.y_simg;
		wall.x_img = wall.x_simg;
	}
	texture_s_assi();
}

void	triangle_draw(float x, float ds, float de)
{
	wall.img_y = 0;
	texture_side();
	wall.y_step = wall.y_img / (float)(de - ds);
	while (ds <= de)
	{
		wall.color = wall.xpm_data[(int)(wall.offset + ((int)(wall.img_y) *
					wall.x_img))];
		wall.color = shadow_effect(wall.color);
		if (x < window.width && x >= 0 && ds < window.height && ds >= 0)
			mlx_img_put(x, ds, wall.color);
		ds++;
		wall.img_y += wall.y_step;
	}
}

void	tdwalls_rendring(float x)
{
	float	ds;
	float	de;
	int		y;
	float	beta;

	beta = player.angle_v - ray.o_angle;
	y = 0;
	ray.dis *= cos(beta);
	ray.pw_dis = (window.width / 2) / tan((FOV / 2) * RAD);
	ray.pw_height = (TILE_SIZE / ray.dis) * ray.pw_dis;
	ds = ((window.height) / 2) - (ray.pw_height / 2) + player.up;
	de = ((window.height) / 2) + (ray.pw_height / 2) + player.up;
	while (y < ds)
	{
		mlx_img_put(x, y, map.ceilling_color);
		y++;
	}
	y = de;
	while (y < window.height)
	{
		mlx_img_put(x, y, map.floor_color);
		y++;
	}
	triangle_draw(x, ds, de);
}
