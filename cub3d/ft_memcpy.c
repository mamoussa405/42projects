/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:04:07 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 17:24:22 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "objects.h"
#include "cub3d.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t save;

	save = n;
	if (n == 0 || ((char *)dst == NULL && (char *)src == NULL))
		return (dst);
	while (n > 0)
	{
		*(char *)dst = *(char *)src;
		dst++;
		src++;
		n--;
	}
	return (dst - save);
}
