/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_dis_cal_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:27:16 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:08:06 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "objects_bonus.h"
#include "cub3d_bonus.h"

void	sp_dis_cal(void)
{
	player.ptr = player.head;
	while (player.ptr)
	{
		player.ptr->dis = sqrt(pow(player.ptr->x - player.x, 2) +
				pow(player.ptr->y - player.y, 2));
		player.ptr = player.ptr->next;
	}
}
