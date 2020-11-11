/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_convert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 20:59:45 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/09 22:08:46 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*hexa_convert(size_t nb, int cap)
{
	int		result;
	char	*buffer;
	char	*hexa_base;
	int		i;

	result = 0;
	i = 0;
	buffer = malloc(30);
	hexa_base = ft_strdup("0123456789abcdef");
	while (nb >= 16)
	{
		result = nb % 16;
		buffer[i++] = hexa_base[result];
		nb /= 16;
	}
	result = nb;
	buffer[i++] = hexa_base[result];
	buffer[i] = '\0';
	buffer = ft_strrev(buffer);
	if (cap == 1)
		buffer = ft_strcapitalize(buffer);
	free(hexa_base);
	return (buffer);
}
