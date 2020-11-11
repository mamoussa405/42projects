/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:36:19 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/05 20:41:28 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	char	j;
	char	*ptr;
	int		i;

	j = c;
	ptr = (char *)s;
	i = 0;
	while (ptr[i])
		i++;
	if (j == '\0')
		return (ptr + i);
	while (*ptr)
	{
		if (*ptr == j)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
