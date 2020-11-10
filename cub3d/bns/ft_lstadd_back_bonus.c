/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:44:08 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:06:55 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

void	ft_lstadd_back(t_sprite **alst, t_sprite *new)
{
	t_sprite *ptr;

	ptr = *alst;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	new->next = NULL;
}
