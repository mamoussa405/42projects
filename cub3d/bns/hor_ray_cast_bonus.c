/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hor_ray_cast_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 22:17:26 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:07:13 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

void	hor_assi(void)
{
	int is_wall;

	is_wall = 0;
	while (is_wall == 0 && (ray.h_x_int >= 0 && ray.h_x_int <=
				(map.width * TILE_SIZE) && ray.h_y_int >= 0 &&
				ray.h_y_int <= (map.height * TILE_SIZE)))
	{
		if (cor_calc2(ray.h_x_int, ray.h_y_int) == 1)
		{
			ray.h_dis = sqrt(pow(ray.h_x_int - player.x, 2) +
					pow(ray.h_y_int - player.y, 2));
			is_wall = 1;
		}
		else if ((cor_calc2(ray.h_x_int, ray.h_y_int) == 0))
		{
			ray.h_y_int += ray.h_y_step;
			ray.h_x_int += ray.h_x_step;
		}
		else if ((cor_calc2(ray.h_x_int, ray.h_y_int) == 2))
		{
			ray.h_y_int += ray.h_y_step;
			ray.h_x_int += ray.h_x_step;
			player.is_sp_h = 1;
		}
	}
}

void	hor_ray_cast(void)
{
	int is_wall;

	is_wall = 0;
	ray.o_angle = fmod(ray.o_angle, (2 * M_PI));
	ray.o_angle += (ray.o_angle < 0) ? (2 * M_PI) : 0;
	direction();
	ray.h_y_int = floor(player.y / TILE_SIZE) * TILE_SIZE;
	ray.h_y_int -= (ray.is_up == 1) ? 0 : -TILE_SIZE;
	ray.h_x_int = (player.y - ray.h_y_int) / tan(ray.o_angle);
	ray.h_x_int = (player.x - ray.h_x_int);
	ray.h_y_step = (ray.is_up == 1) ? -TILE_SIZE : TILE_SIZE;
	ray.h_x_step = ray.h_y_step / tan(ray.o_angle);
	hor_assi();
}
