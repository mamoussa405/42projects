/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_shadow_effect.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:33:27 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 20:11:58 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "objects.h"

int		sp_shadow_effect(int color, int dis)
{
	int result;

	if (dis / 64 > 1)
	{
		map.b_color = fmod(color, 256) / (dis / 90);
		map.g_color = fmod((color - map.b_color) / 256, 256) / (dis / 90);
		map.r_color = fmod((color - map.b_color) / pow(256, 2), 256)
			/ (dis / 90);
		result = (map.r_color * pow(256, 2)) + (map.g_color * 256) +
			map.b_color;
		return (result);
	}
	return (color);
}
