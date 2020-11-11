/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent_printer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:33:39 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/12 21:07:02 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int				star_checker(char **flags, va_list args, int res)
{
	int i;
	int width;

	width = res;
	i = 0;
	while (flags[0][i] && flags[0][i] != '.')
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

static int				normal_width(int width, char *flags, t_variables *p)
{
	p->size = 0;
	if (*flags != '-' && *flags != '0')
		while (width > 1)
		{
			p->size += ft_putchar_fd(' ', 1);
			width--;
		}
	else if (*flags == '0')
	{
		while (width > 1)
		{
			p->size += ft_putchar_fd('0', 1);
			width--;
		}
	}
	return (width);
}

static void				left_width(int spaces, t_variables *p)
{
	while (spaces > 1)
	{
		p->size += ft_putchar_fd(' ', 1);
		spaces--;
	}
}

int						ft_percent_printer(char *flags, va_list args,
		const char *format)
{
	t_variables *p;

	p = malloc(sizeof(t_variables));
	p->m_w = ft_atoim(flags);
	p->m_w = star_checker(&flags, args, p->m_w);
	p->m_w = normal_width(p->m_w, flags, p);
	p->size += ft_putchar_fd(*format, 1);
	left_width(p->m_w, p);
	free(p);
	return (p->size);
}
