/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:02:28 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:26:41 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

void	init_var(void)
{
	map.height = 0;
	map.width = 0;
	player.head = NULL;
}

void	ma_assi(char **arv)
{
	if (ft_memcmp(arv[2], "--save", 6) == 0)
	{
		bitmap();
		mlx_destroy_image(mlx.mlx_ptr, mlx.img_ptr);
		mlx_destroy_window(mlx.mlx_ptr, mlx.win_ptr);
		exit(0);
	}
}

int		main(int arc, char **arv)
{
	arc = 0;
	if (!arv[1] || (open(arv[1], O_RDONLY)) < 0)
		error("file not found");
	init_var();
	map_tre(arv);
	info_taker();
	error_checker();
	mlx.mlx_ptr = mlx_init();
	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, window.width,
			window.height, "Map");
	mlx.img_ptr = mlx_new_image(mlx.mlx_ptr, window.width, window.height);
	if (!(window.zbuffer = (float*)malloc(window.width * sizeof(float)))
			&& !memset(window.zbuffer, 0, window.width))
		return (1);
	map_rendring();
	ma_assi(arv);
	mlx_hook(mlx.win_ptr, 2, 0, ft_keypres, NULL);
	mlx_hook(mlx.win_ptr, 3, 0, ft_keyrel, NULL);
	mlx_hook(mlx.win_ptr, 17, 0, win_close, NULL);
	mlx_loop_hook(mlx.mlx_ptr, update, 0);
	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img_ptr, 0, 0);
	mlx_loop(mlx.mlx_ptr);
	return (0);
}
