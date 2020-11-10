/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cor_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 12:13:00 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 17:23:28 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "objects.h"

int		cor_calc(float x, float y)
{
	int x_result;
	int y_result;

	x_result = (int)(x / TILE_SIZE);
	y_result = (int)(y / TILE_SIZE);
	if (map.saver[y_result][x_result] == '1')
		return (1);
	if (map.saver[y_result][x_result] == '2')
		return (2);
	return (0);
}

int		cor_calc2(float x, float y)
{
	int x_result;
	int y_result;

	if (x == ray.v_x_int && (ray.is_left == 1))
	{
		x -= 1;
	}
	if (y == ray.h_y_int && (ray.is_up == 1))
	{
		y -= 1;
	}
	x_result = (int)(x / TILE_SIZE);
	y_result = (int)(y / TILE_SIZE);
	if (map.saver[y_result][x_result] == '1')
		return (1);
	if (map.saver[y_result][x_result] == '2')
		return (2);
	return (0);
}
