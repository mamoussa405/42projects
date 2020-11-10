/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:59:41 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 17:23:56 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "objects.h"

void	ft_bzer(void *s, register size_t n)
{
	while (n--)
	{
		*(char *)s++ = 0;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	register void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (ptr);
	ft_bzer(ptr, count * size);
	return (ptr);
}
