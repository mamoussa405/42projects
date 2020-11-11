/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_printer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:42:03 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/12 21:09:34 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		star_checker(char **flags, va_list args, int res)
{
	int				i;
	int				result;
	int				handler;

	i = 0;
	result = res;
	handler = 0;
	while (flags[0][i] != '.' && flags[0][i])
	{
		if (flags[0][i++] == '*')
		{
			handler = va_arg(args, int);
			result = handler;
		}
	}
	if (result < 0)
	{
		flags[0][0] = '-';
		result *= -1;
	}
	return (result);
}

static	int		point_checker(char *flags, va_list args)
{
	char	*point_position;
	int		precesion;

	precesion = -1;
	point_position = NULL;
	if ((point_position = ft_strchr(flags, '.')))
	{
		precesion = ft_atoi(++point_position);
		if (*point_position == '*')
			precesion = va_arg(args, int);
	}
	return (precesion);
}

static int		normal_width(int width, char *flags, t_variables *p)
{
	int i;

	i = 0;
	p->size = 0;
	while (width > 0 && *flags != '-')
	{
		p->size += ft_putchar_fd(' ', 1);
		width--;
	}
	return (width);
}

int				ft_string_printer(char *flags, va_list args)
{
	t_variables		*p;

	p = malloc(sizeof(t_variables));
	p->m_w = ft_atoim(flags);
	p->m_w = star_checker(&flags, args, p->m_w);
	p->prc = point_checker(flags, args);
	p->str = va_arg(args, char *);
	if (p->str == NULL)
		p->str = "(null)";
	p->min = ((p->prc < ft_strlen(p->str) && (p->prc >= 0)) ?
	p->prc : ft_strlen(p->str));
	if (p->min < 0)
		p->min *= -1;
	p->num_space = p->m_w - p->min;
	p->num_space = normal_width(p->num_space, flags, p);
	p->size += ft_strings_precision(p->prc, p->str, flags);
	while (p->num_space > 0)
	{
		p->size += ft_putchar_fd(' ', 1);
		p->num_space--;
	}
	free(p);
	return (p->size);
}
