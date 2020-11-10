/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:03:40 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 20:06:56 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "objects.h"

void	normalize(void)
{
	player.angle_v = player.rotangle + ((FOV / 2) * RAD);
	ray.angle = player.rotangle;
	ray.angle = fmod(ray.angle, (2 * M_PI));
	ray.angle += (ray.angle < 0) ? (2 * M_PI) : 0;
}
