/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_cast.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 11:47:07 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 20:09:24 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "objects.h"

void	ray_cast(void)
{
	ray.v_dis = 1000000;
	ray.h_dis = 1000000;
	hor_ray_cast();
	ver_ray_cast();
	if (ray.h_dis <= ray.v_dis)
	{
		ray.dis = ray.h_dis;
		wall.hits_hor = 1;
		wall.offset = fmod(ray.h_x_int, TILE_SIZE);
		wall.hits_ver = 0;
	}
	else if (ray.v_dis < ray.h_dis)
	{
		ray.dis = ray.v_dis;
		wall.hits_ver = 1;
		wall.offset = fmod(ray.v_y_int, TILE_SIZE);
		wall.hits_hor = 0;
	}
}
