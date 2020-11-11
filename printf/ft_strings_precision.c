/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings_precision.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:24:11 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/08 18:50:55 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		normal_precision(int precision, char *string)
{
	int i;
	int size;

	size = 0;
	i = 0;
	while (precision > 0 && string[i])
	{
		size += ft_putchar_fd(string[i++], 1);
		precision--;
	}
	return (size);
}

int				ft_strings_precision(int precision, char *string, char *flags)
{
	int i;
	int size;

	size = 0;
	i = 0;
	if (*flags == '-')
	{
		while (precision > 0 && string[i])
		{
			size += ft_putchar_fd(string[i++], 1);
			precision--;
		}
	}
	else
		size = normal_precision(precision, string);
	if (size == 0 && precision != 0)
		size = ft_putstr_fd(string, 1);
	return (size);
}
