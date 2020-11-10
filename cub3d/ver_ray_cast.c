/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver_ray_cast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 12:47:10 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 20:33:34 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "objects.h"

void	ver_assi(void)
{
	int is_wall;

	is_wall = 0;
	while (is_wall == 0 && (ray.v_x_int >= 0 && ray.v_x_int <=
				(map.width * TILE_SIZE) && ray.v_y_int >= 0 && ray.v_y_int <=
				(map.height * TILE_SIZE)))
	{
		if ((cor_calc2(ray.v_x_int, ray.v_y_int) == 0))
		{
			ray.v_x_int += ray.v_x_step;
			ray.v_y_int += ray.v_y_step;
		}
		else if (cor_calc2(ray.v_x_int, ray.v_y_int) == 1)
		{
			ray.v_dis = sqrt(pow(ray.v_x_int - player.x, 2) +
					pow(ray.v_y_int - player.y, 2));
			is_wall = 1;
		}
		else if ((cor_calc2(ray.v_x_int, ray.v_y_int) == 2))
		{
			ray.v_y_int += ray.v_y_step;
			ray.v_x_int += ray.v_x_step;
			player.is_sp_v = 1;
		}
	}
}

void	ver_ray_cast(void)
{
	ray.o_angle = fmod(ray.o_angle, (2 * M_PI));
	ray.o_angle += (ray.o_angle < 0) ? (2 * M_PI) : 0;
	direction();
	ray.v_x_int = floor(player.x / TILE_SIZE) * TILE_SIZE;
	ray.v_x_int += (ray.is_right == 1) ? TILE_SIZE : 0;
	ray.v_y_int = (player.x - ray.v_x_int) * tan(ray.o_angle);
	ray.v_y_int = player.y - ray.v_y_int;
	ray.v_x_step = (ray.is_right == 1) ? TILE_SIZE : -TILE_SIZE;
	ray.v_y_step = ray.v_x_step * tan(ray.o_angle);
	ver_assi();
}
