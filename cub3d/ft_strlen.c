/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:56:00 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 17:24:31 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "objects.h"

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
