/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_rendring.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:55:58 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 20:54:24 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "objects.h"
#include "cub3d.h"

void	texture(void)
{
	mlx.img_ntex = mlx_xpm_file_to_image(mlx.mlx_ptr,
			map.nt_p, &wall.x_nimg, &wall.y_nimg);
	mlx.img_wtex = mlx_xpm_file_to_image(mlx.mlx_ptr,
			map.wt_p, &wall.x_wimg, &wall.y_wimg);
	mlx.img_etex = mlx_xpm_file_to_image(mlx.mlx_ptr,
			map.et_p, &wall.x_eimg, &wall.y_eimg);
	mlx.img_stex = mlx_xpm_file_to_image(mlx.mlx_ptr,
			map.st_p, &wall.x_simg, &wall.y_simg);
	mlx.img_sp = mlx_xpm_file_to_image(mlx.mlx_ptr,
			map.spt_p, &player.sp_x, &player.sp_y);
	if (!mlx.img_ntex || !mlx.img_wtex || !mlx.img_etex || !mlx.img_stex ||
			!mlx.img_sp)
		error("texture path not found");
}

void	ft_swap(void)
{
	float s_x;
	float s_y;
	float s_dis;

	s_x = player.ptr->x;
	s_y = player.ptr->y;
	s_dis = player.ptr->dis;
	player.ptr->x = player.dont_edit->x;
	player.ptr->y = player.dont_edit->y;
	player.ptr->dis = player.dont_edit->dis;
	player.dont_edit->x = s_x;
	player.dont_edit->y = s_y;
	player.dont_edit->dis = s_dis;
}

void	dis_sort(void)
{
	player.ptr = player.head;
	while (player.ptr)
	{
		player.dont_edit = player.ptr->next;
		while (player.dont_edit)
		{
			if (player.ptr->dis < player.dont_edit->dis)
				ft_swap();
			player.dont_edit = player.dont_edit->next;
		}
		player.ptr = player.ptr->next;
	}
}

void	fov_redring(void)
{
	float angle;
	float x;

	x = 0;
	normalize();
	angle = ray.angle;
	texture();
	player_rendring();
	sp_dis_cal();
	dis_sort();
	while (ray.angle <= angle + (FOV * RAD))
	{
		ray.o_angle = ray.angle;
		ray_cast();
		window.zbuffer[(int)x] = ray.dis;
		tdwalls_rendring(x);
		x++;
		ray.angle += ((FOV * RAD) / (window.width));
	}
	player.dont_edit = player.head;
	while (player.dont_edit)
	{
		sprite_cal();
		player.dont_edit = player.dont_edit->next;
	}
}

void	player_rendring(void)
{
	player.is_sp_v = 0;
	player.is_sp_h = 0;
	player.x = player.tilex + player.d_x;
	player.y = player.tiley + player.d_y;
}
