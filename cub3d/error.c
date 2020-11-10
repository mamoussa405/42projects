/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:28:19 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 17:44:10 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "objects.h"

void	error(const char *str)
{
	write(1, "error:", 6);
	write(1, str, ft_strlen(str));
	exit(0);
}
