/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shadow_effect_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:01:05 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:08:03 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "objects_bonus.h"
#include "cub3d_bonus.h"

int		shadow_effect(int color)
{
	int result;

	if (ray.dis / 64 > 2)
	{
		map.b_color = fmod(color, 256) / (ray.dis / 100);
		map.g_color = fmod((color - map.b_color) / 256, 256) / (ray.dis / 100);
		map.r_color = fmod((color - map.b_color) / pow(256, 2), 256)
			/ (ray.dis / 100);
		result = (map.r_color * pow(256, 2)) + (map.g_color * 256) +
			map.b_color;
		return (result);
	}
	return (color);
}
