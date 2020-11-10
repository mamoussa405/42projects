/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:28:19 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:06:36 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"
#include "objects_bonus.h"

void	error(const char *str)
{
	write(1, "error:", 6);
	write(1, str, ft_strlen(str));
	exit(0);
}
