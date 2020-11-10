/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:27:23 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 17:51:42 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "objects.h"

t_sprite	*ft_lstnew(void)
{
	t_sprite	*ptr;

	ptr = malloc(sizeof(t_sprite));
	ptr->next = NULL;
	return (ptr);
}
