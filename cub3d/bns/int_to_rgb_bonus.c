/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_rgb_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 20:00:45 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:07:17 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

void	int_to_rgb(int color)
{
	map.b_color = fmod(color, 256);
	map.g_color = fmod((color - map.b_color) / 256, 256);
	map.r_color = fmod((color - map.b_color) / pow(256, 2), 256);
}
