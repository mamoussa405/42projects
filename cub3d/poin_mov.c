/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poin_mov.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 22:30:42 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 20:08:38 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "objects.h"
#include "cub3d.h"

void	pv_mov(void)
{
	float theta;

	theta = player.angle_v - M_PI_2;
	tile.x = 0;
	tile.y = 0;
	if (go.pv_left == 1 && cor_calc2(player.x + (40 * cos(theta))
				, player.y + (40 * sin(theta))) == 0)
	{
		player.d_x += cos(theta) * 10;
		player.d_y += sin(theta) * 10;
	}
	if (go.pv_right == 1 && cor_calc2(player.x - (40 * cos(theta))
				, player.y - (40 * sin(theta))) == 0)
	{
		player.d_x -= cos(theta) * 10;
		player.d_y -= sin(theta) * 10;
	}
}
