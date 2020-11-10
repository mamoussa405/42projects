/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:56:00 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:07:10 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

int		ft_strlen(const char *s)
{
	size_t compt;

	compt = 0;
	while (*s != '\0')
	{
		s++;
		compt++;
	}
	return (compt);
}
