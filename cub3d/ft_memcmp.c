/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:53:42 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/19 17:52:27 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "objects.h"
#include "cub3d.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (!s1)
		return (1);
	while (n > 0)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
			n--;
		}
		else
			return (*str1 - *str2);
	}
	return (0);
}
