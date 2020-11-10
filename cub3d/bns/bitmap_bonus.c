/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitmap_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 12:13:11 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:06:23 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

void	ft_header(void)
{
	bmp.width = window.width;
	bmp.height = window.height;
	bmp.bitcount = 24;
	bmp.width_in_bytes = ((bmp.width * bmp.bitcount + 31) / 32) * 4;
	bmp.imagesize = bmp.width_in_bytes * bmp.height;
	bmp.bisize = 40;
	bmp.bf0ffbits = 54;
	bmp.filesize = 54 + bmp.imagesize;
	bmp.biplanes = 1;
	bmp.header = ft_calloc(54, sizeof(unsigned char));
	ft_memcpy(bmp.header, "BM", 2);
	ft_memcpy(bmp.header + 2, &bmp.filesize, 4);
	ft_memcpy(bmp.header + 10, &bmp.bf0ffbits, 4);
	ft_memcpy(bmp.header + 14, &bmp.bisize, 4);
	ft_memcpy(bmp.header + 18, &bmp.width, 4);
	ft_memcpy(bmp.header + 22, &bmp.height, 4);
	ft_memcpy(bmp.header + 26, &bmp.biplanes, 2);
	ft_memcpy(bmp.header + 28, &bmp.bitcount, 2);
	ft_memcpy(bmp.header + 34, &bmp.imagesize, 4);
}

int		get_pix_color(int x, int y)
{
	int color;
	int *data;
	int unused;

	data = (int *)mlx_get_data_addr(mlx.img_ptr, &unused, &unused, &unused);
	color = data[(window.height - y) * window.width + x];
	return (color);
}

void	ft_buffer(void)
{
	int row;
	int col;
	int color;

	row = bmp.height - 1;
	bmp.buffer = malloc(bmp.imagesize);
	while (row >= 0)
	{
		col = 0;
		while (col < bmp.width)
		{
			color = get_pix_color(col, row);
			int_to_rgb(color);
			bmp.buffer[row * bmp.width_in_bytes + col * 3 + 0] = map.b_color;
			bmp.buffer[row * bmp.width_in_bytes + col * 3 + 1] = map.g_color;
			bmp.buffer[row * bmp.width_in_bytes + col * 3 + 2] = map.r_color;
			col++;
		}
		row--;
	}
}

void	bitmap(void)
{
	int fd;

	ft_header();
	ft_buffer();
	fd = open("cub3d.bmp", O_RDWR | O_CREAT, 500);
	write(fd, bmp.header, 54);
	write(fd, bmp.buffer, bmp.imagesize);
	free(bmp.buffer);
	free(bmp.header);
}
