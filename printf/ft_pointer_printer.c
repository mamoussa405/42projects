/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_printer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 20:16:41 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/12 21:09:11 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int		normal_width(int spaces, char *flags, t_variables *p)
{
	p->size = 0;
	while (spaces > 0 && *flags != '-')
	{
		p->size += ft_putchar_fd(' ', 1);
		spaces--;
	}
	return (spaces);
}

static	void	left_width(int spaces, t_variables *p)
{
	while (spaces > 0)
	{
		p->size += ft_putchar_fd(' ', 1);
		spaces--;
	}
}

static	int		star_checker(char **flags, va_list args, int res)
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

int				ft_pointer_printer(char *flags, va_list args)
{
	unsigned long			handler;
	char					*saver;
	char					*tmp;
	t_variables				*p;

	p = malloc(sizeof(t_variables));
	saver = ft_strdup("0x");
	p->m_w = ft_atoim(flags);
	p->m_w = star_checker(&flags, args, p->m_w);
	handler = va_arg(args, size_t);
	p->str = hexa_convert(handler, 0);
	tmp = p->str;
	p->str = ft_strjoin(saver, p->str);
	p->num_space = p->m_w - ft_strlen(p->str);
	p->num_space = normal_width(p->num_space, flags, p);
	p->size += ft_putstr_fd(p->str, 1);
	left_width(p->num_space, p);
	free(tmp);
	free(p->str);
	free(saver);
	free(p);
	return (p->size);
}
