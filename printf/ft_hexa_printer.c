/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_printer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:37:36 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/12 21:08:40 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int		star_checker(char **flags, va_list args, int res)
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

static	int		point_checker(char *flags, va_list args, t_variables *p)
{
	int		precesion;

	precesion = -1;
	p->pr = NULL;
	if ((p->pr = ft_strchr(flags, '.')))
	{
		precesion = ft_atoi(++(p->pr));
		if (*(p->pr) == '*')
			precesion = va_arg(args, int);
	}
	return (precesion);
}

int				ft_hexa_printer(char *flags, va_list args, const char *format)
{
	unsigned int	handler;
	t_variables		*p;

	p = malloc(sizeof(t_variables));
	p->m_w = ft_atoim(flags);
	p->m_w = star_checker(&flags, args, p->m_w);
	p->prc = point_checker(flags, args, p);
	handler = va_arg(args, unsigned int);
	p->type = ((*format == 'x') ? 0 : 1);
	p->str = hexa_convert(handler, p->type);
	p->max = ((p->prc > ft_strlen(p->str) ? p->prc : ft_strlen(p->str)));
	if (p->prc == 0 && *(p->str) == '0')
	{
		*(p->str) = ' ';
		p->max -= 1;
	}
	if (p->pr != NULL && *flags == '0')
		flags += 1;
	p->num_space = p->m_w - p->max;
	ft_udigits_assist(flags, p);
	free(p->str);
	free(p);
	return (p->size);
}
