/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_init_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 22:02:26 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:07:33 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

void	player_init(char *line)
{
	if (ft_strchr(line, 'N'))
		player.rotangle = 240.0 * RAD;
	if (ft_strchr(line, 'S'))
		player.rotangle = 60.0 * RAD;
	if (ft_strchr(line, 'E'))
		player.rotangle = 330.0 * RAD;
	if (ft_strchr(line, 'W'))
		player.rotangle = 150.0 * RAD;
}
