/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_taker_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 21:54:22 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:07:15 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

char	**floor_assi(void)
{
	char	**ptr;
	int		i;

	i = 0;
	map.fc_p++;
	while (*map.fc_p == ' ' || *map.fc_p == 'c')
		map.fc_p++;
	if (ft_isdigit_mod(map.fc_p) == 0)
		error("not a valid floor color");
	ptr = ft_split(map.fc_p, ',');
	while (ptr[i])
		i++;
	if (i != 3)
		error("not a valid floor color");
	return (ptr);
}

void	floor_color(void)
{
	char	**ptr;
	char	*tmp[3];

	ptr = floor_assi();
	tmp[0] = ptr[0];
	map.r_color = ft_atoim(&ptr[0]);
	tmp[1] = ptr[1];
	map.g_color = ft_atoim(&ptr[1]);
	tmp[2] = ptr[2];
	map.b_color = ft_atoim(&ptr[2]);
	if (map.r_color > 255 || map.r_color < 0 || map.g_color > 255 ||
			map.g_color < 0 || map.b_color > 255 || map.b_color < 0)
		error("not a valid floor color");
	map.floor_color = (map.r_color * pow(256, 2)) + (map.g_color * 256) +
		map.b_color;
	free(tmp[0]);
	free(tmp[1]);
	free(tmp[2]);
	free(ptr);
}

char	**ceilling_assi(void)
{
	char	**ptr;
	int		i;

	i = 0;
	map.cc_p++;
	while (*map.cc_p == ' ' || *map.cc_p == 'c')
		map.cc_p++;
	if (ft_isdigit_mod(map.cc_p) == 0)
		error("not a valid ceilling color");
	ptr = ft_split(map.cc_p, ',');
	while (ptr[i])
		i++;
	if (i != 3)
		error("not a valid ceilling color");
	return (ptr);
}

void	ceilling_color(void)
{
	char	**ptr;
	char	*tmp[3];

	ptr = ceilling_assi();
	tmp[0] = ptr[0];
	map.r_color = ft_atoim(&ptr[0]);
	tmp[1] = ptr[1];
	map.g_color = ft_atoim(&ptr[1]);
	tmp[2] = ptr[2];
	map.b_color = ft_atoim(&ptr[2]);
	if (map.r_color > 255 || map.r_color < 0 || map.g_color > 255 ||
			map.g_color < 0 || map.b_color > 255 || map.b_color < 0)
		error("not a valid ceilling color");
	map.ceilling_color = (map.r_color * pow(256, 2)) + (map.g_color * 256) +
		map.b_color;
	free(tmp[0]);
	free(tmp[1]);
	free(tmp[2]);
	free(ptr);
}

void	info_taker(void)
{
	if (!map.res)
		error("we need resolution");
	map.res++;
	if (ft_isdigit(map.res) == 0 || ft_isdigit(map.res) == 0 || !map.nt_p ||
			!map.st_p || !map.wt_p || !map.et_p || !map.spt_p)
		error("we need texture path");
	window.width = ft_atoim(&(map.res));
	window.height = ft_atoim(&(map.res));
	window.width = (window.width > 2560) ? 2560 : window.width;
	window.height = (window.height > 1440) ? 1440 : window.height;
	floor_color();
	ceilling_color();
	while ((*map.nt_p == 'N' && ft_strchr(map.nt_p, 'O')) ||
			*map.nt_p == 'O' || *map.nt_p == ' ')
		map.nt_p++;
	while ((*map.st_p == 'S' && ft_strchr(map.st_p, 'O')) ||
			*map.st_p == 'O' || *map.st_p == ' ')
		map.st_p++;
	while (*map.wt_p == 'W' || *map.wt_p == 'E' || *map.wt_p == ' ')
		map.wt_p++;
	while ((*map.et_p == 'E' && ft_strchr(map.et_p, 'A')) ||
			*map.et_p == 'A' || *map.et_p == ' ')
		map.et_p++;
	while (*map.spt_p == 'S' || *map.spt_p == ' ')
		map.spt_p++;
}
