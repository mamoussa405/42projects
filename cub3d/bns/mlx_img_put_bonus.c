/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_img_put_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 16:57:42 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:07:28 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

void	mlx_img_put(int x, int y, int color)
{
	int *data;
	int unusded;

	data = (int*)mlx_get_data_addr(mlx.img_ptr, &unusded, &unusded, &unusded);
	if (x < window.width && x >= 0 && y < window.height && y >= 0)
		data[x + (y * window.width)] = color;
}
