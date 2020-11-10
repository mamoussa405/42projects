# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 17:46:40 by mamoussa          #+#    #+#              #
#    Updated: 2020/01/20 15:12:39 by mamoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3d

SRC =	error.c \
	ft_lstnew.c \
	int_to_rgb.c \
	poin_mov.c \
	error_checker.c \
	ft_memcmp.c \
	map.c \
	ray_cast.c \
	ft_atoi.c \
	ft_memcpy.c \
	shadow_effect.c \
	ft_atoim.c \
	ft_split.c \
	map_rendring.c \
	sp_dis_cal.c \
	bitmap.c \
	ft_calloc.c \
	ft_strlen.c \
	map_tre_assi.c \
	sp_shadow_effect.c \
	cor_calc.c \
	ft_isdigit.c \
	get_next_line.c \
	mlx_img_put.c \
	sprite_cal.c \
	ft_isdigit_mod.c \
	normalize.c \
	tdwalls_rendring.c \
	cub3d.c \
	ft_key.c \
	get_next_line_utils.c \
	ft_lstadd_back.c \
	hor_ray_cast.c \
	player_init.c \
	update.c \
	direction.c \
	info_taker.c \
	player_rendring.c \
	ver_ray_cast.c

SRC_B =	bns/error_bonus.c \
	bns/ft_lstnew_bonus.c \
	bns/int_to_rgb_bonus.c \
	bns/poin_mov_bonus.c \
	bns/error_checker_bonus.c \
	bns/ft_memcmp_bonus.c \
	bns/map_bonus.c \
	bns/ray_cast_bonus.c \
	bns/ft_atoi_bonus.c \
	bns/ft_memcpy_bonus.c \
	bns/shadow_effect_bonus.c \
	bns/ft_atoim_bonus.c \
	bns/ft_split_bonus.c \
	bns/map_rendring_bonus.c \
	bns/sp_dis_cal_bonus.c \
	bns/bitmap_bonus.c \
	bns/ft_calloc_bonus.c \
	bns/ft_strlen_bonus.c \
	bns/map_tre_assi_bonus.c \
	bns/sp_shadow_effect_bonus.c \
	bns/cor_calc_bonus.c \
	bns/ft_isdigit_bonus.c \
	bns/get_next_line_bonus.c \
	bns/mlx_img_put_bonus.c \
	bns/sprite_cal_bonus.c \
	bns/ft_isdigit_mod_bonus.c \
	bns/normalize_bonus.c \
	bns/tdwalls_rendring_bonus.c \
	bns/cub3d_bonus.c \
	bns/ft_key_bonus.c \
	bns/get_next_line_utils_bonus.c \
	bns/ft_lstadd_back_bonus.c \
	bns/hor_ray_cast_bonus.c \
	bns/player_init_bonus.c \
	bns/update_bonus.c \
	bns/direction_bonus.c \
	bns/info_taker_bonus.c \
	bns/player_rendring_bonus.c \
	bns/ver_ray_cast_bonus.c

all : $(NAME)

cub3d:
		gcc  -Wall -Wextra -Werror -D BUFFER_SIZE=10 -lmlx -framework OpenGL -framework Appkit $(SRC) -o cub3D

bonus :
		gcc  -Wall -Wextra -Werror -D BUFFER_SIZE=10 -lmlx -framework OpenGL -framework Appkit $(SRC_B) -o cub3D
clean:
	rm -rf cub3D

fclean:clean
	rm -rf cub3d.bmp

re : fclean all