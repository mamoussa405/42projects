/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   objects.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:10:07 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 21:04:16 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECTS_H
# define OBJECTS_H
# include <mlx.h>
# include <math.h>
# include <stdlib.h>

struct			s_map
{
	int		height;
	int		width;
	char	*res;
	char	*nt_p;
	char	*st_p;
	char	*wt_p;
	char	*et_p;
	char	*spt_p;
	char	*fc_p;
	char	*cc_p;
	char	**saver;
	int		ceilling_color;
	int		floor_color;
	int		r_color;
	int		g_color;
	int		b_color;
	int		l_num;
}				map;

typedef	struct	s_sprite
{
	float			x;
	float			y;
	float			dis;
	struct s_sprite	*next;
}				t_sprite;

struct			s_tile
{
	int	x;
	int	y;
}				tile;

struct			s_key
{
	short front;
	short back;
	short up;
	short down;
	short left;
	short right;
	short pv_right;
	short pv_left;
	short esc;
	short jump;
}				go;

struct			s_bitmap
{
	int32_t			width;
	int32_t			height;
	uint16_t		bitcount;
	int				width_in_bytes;
	unsigned char	*header;
	unsigned char	*buffer;
	uint32_t		imagesize;
	uint32_t		bisize;
	uint32_t		bf0ffbits;
	uint32_t		filesize;
	uint16_t		biplanes;
}				bmp;

struct			s_mlx
{
	void *mlx_ptr;
	void *win_ptr;
	void *img_ptr;
	void *img_ntex;
	void *img_stex;
	void *img_wtex;
	void *img_etex;
	void *img_sp;
}				mlx;

struct			s_wall
{
	int		color;
	int		hits_hor;
	int		hits_ver;
	float	offset;
	float	img_x;
	float	img_y;
	float	y_step;
	int		*xpm_data;
	int		x_img;
	int		x_nimg;
	int		x_simg;
	int		x_wimg;
	int		x_eimg;
	int		y_img;
	int		y_nimg;
	int		y_simg;
	int		y_wimg;
	int		y_eimg;
}				wall;

struct			s_player
{
	float		x;
	float		d_x;
	float		d_y;
	float		tilex;
	float		tiley;
	float		y;
	float		rotangle;
	float		angle;
	float		movespeed;
	int			radu;
	float		angle_v;
	float		s_dis;
	int			sp_x;
	int			sp_y;
	int			sp_color;
	float		sp_angle;
	float		ps_angle;
	float		sp_size;
	float		sprite_x;
	float		sprite_y;
	float		sprite_dis;
	short		is_sp_v;
	short		is_sp_h;
	float		up;
	t_sprite	*head;
	t_sprite	*ptr;
	t_sprite	*dont_edit;
}				player;

struct			s_ray
{
	float	x;
	float	y;
	float	h_x_int;
	float	h_y_int;
	float	h_x_step;
	float	h_y_step;
	float	v_x_int;
	float	v_y_int;
	float	v_x_step;
	float	v_y_step;
	int		is_up;
	float	h_dis;
	float	v_dis;
	int		is_left;
	int		is_down;
	int		is_right;
	float	dis;
	float	angle;
	float	o_angle;
	float	pw_dis;
	float	pw_height;
}				ray;

struct			s_window
{
	int		height;
	int		width;
	float	*zbuffer;
}				window;
#endif
