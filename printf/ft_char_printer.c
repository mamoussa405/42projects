/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_printer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 21:26:04 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/12 16:42:36 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		star_checker(char **flags, va_list args, int res)
{
	int i;
	int width;

	width = res;
	i = 0;
	while (flags[0][i])
	{
		if (flags[0][i++] == '*')
			width = (int)va_arg(args, int);
	}
	if (width < 0)
	{
		*flags[0] = '-';
		width *= -1;
	}
	return (width);
}

int				ft_char_printer(char *flags, va_list args)
{
	int		width;
	char	args_handler;
	int		size;

	size = 0;
	width = ft_atoim(flags);
	width = star_checker(&flags, args, width);
	while (width > 1 && *flags != '-')
	{
		size += ft_putchar_fd(' ', 1);
		width--;
	}
	args_handler = (char)va_arg(args, int);
	size += ft_putchar_fd(args_handler, 1);
	while (width > 1)
	{
		size += ft_putchar_fd(' ', 1);
		width--;
	}
	return (size);
}
