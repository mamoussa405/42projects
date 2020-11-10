/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   direction_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 12:43:29 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:06:34 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

void	direction(void)
{
	ray.is_down = ray.o_angle > 0 && ray.o_angle < M_PI;
	ray.is_up = !ray.is_down;
	ray.is_right = ray.o_angle < M_PI_2 || ray.o_angle > 1.5 * M_PI;
	ray.is_left = !ray.is_right;
}
