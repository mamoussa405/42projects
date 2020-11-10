/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 21:42:10 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:06:53 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

int		win_close(void)
{
	mlx_destroy_image(mlx.mlx_ptr, mlx.img_ptr);
	mlx_destroy_window(mlx.mlx_ptr, mlx.win_ptr);
	exit(0);
	return (0);
}

int		ft_keyrel(int key)
{
	if (key == 13)
		go.front = -1;
	if (key == 1)
		go.back = -1;
	if (key == 124)
		go.right = -1;
	if (key == 123)
		go.left = -1;
	if (key == 126)
		go.up = -1;
	if (key == 125)
		go.down = -1;
	if (key == 53)
		go.esc = -1;
	if (key == 0)
		go.pv_left = -1;
	if (key == 2)
		go.pv_right = -1;
	return (0);
}

int		ft_keypres(int key)
{
	if (key == 13)
		go.front = 1;
	if (key == 1)
		go.back = 1;
	if (key == 124)
		go.right = 1;
	if (key == 123)
		go.left = 1;
	if (key == 126)
		go.up = 1;
	if (key == 125)
		go.down = 1;
	if (key == 53)
		go.esc = 1;
	if (key == 0)
		go.pv_left = 1;
	if (key == 2)
		go.pv_right = 1;
	return (0);
}
