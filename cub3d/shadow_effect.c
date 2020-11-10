/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shadow_effect.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:01:05 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 20:10:34 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "objects.h"
#include "cub3d.h"

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
