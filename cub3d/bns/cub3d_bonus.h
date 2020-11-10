/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 10:48:20 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:19:38 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_BONUS_H
# define CUB3D_BONUS_H
# include <stdio.h>
# include <math.h>
# include <fcntl.h>
# include <string.h>
# include <unistd.h>
# include "objects_bonus.h"

int			map_rendring(void);
void		player_rendring(void);
void		fov_redring(void);
float		deg_to_rad(int angl);
int			update(void);
int			cor_calc(float x, float y);
void		hor_ray_cast(void);
void		ray_cast(void);
void		direction(void);
void		ver_ray_cast(void);
void		mlx_img_put(int x, int y, int color);
void		tdwalls_rendring(float x);
int			cor_calc2(float x, float y);
int			ft_strlen(const char *s);
char		**my_realloc(char **ptr);
int			get_next_line(int fd, char **line);
char		*ft_strdup(char const *s1);
void		map_tre(char **argv);
void		player_init(char *line);
char		*ft_strchr(const char *s, int c);
int			exce_map(char *line);
void		min_map(void);
int			ft_atoim(char **str);
void		normalize(void);
void		info_taker(void);
void		error_checker(void);
t_sprite	*ft_lstnew(void);
void		ft_lstadd_back(t_sprite **alst, t_sprite *nwer);
void		sp_dis_cal(void);
void		sprite_cal(void);
int			ft_isdigit_mod(char *c);
void		error(const char *str);
void		line_tre(char **line, char *c_line);
void		map_size_cal(int size);
int			exce_map(char *line);
int			ft_isdigit(char *c);
char		**ft_split(char const *s, char c);
int			shadow_effect(int color);
int			sp_shadow_effect(int color, int dis);
void		bitmap(void);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_calloc(size_t count, size_t size);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		int_to_rgb(int color);
int			ft_keyrel(int key);
int			ft_keypres(int key);
int			win_close(void);
void		pv_mov(void);
void		ft_jump(void);
int			ft_atoi(const char *str);
# define TILE_SIZE 64
# define RAD (M_PI / 180)
# define FOV 60
#endif
