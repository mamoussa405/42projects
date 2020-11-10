/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:27:23 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:06:58 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

t_sprite	*ft_lstnew(void)
{
	t_sprite	*ptr;

	ptr = malloc(sizeof(t_sprite));
	ptr->next = NULL;
	return (ptr);
}
