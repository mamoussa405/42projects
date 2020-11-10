/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_dis_cal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:27:16 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 20:11:27 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "objects.h"
#include "cub3d.h"

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
