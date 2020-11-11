/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:19:40 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/12 21:07:21 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		normal_precision(int precision, char *string)
{
	int size;

	size = 0;
	while (precision > ft_strlen(string))
	{
		size += ft_putchar_fd('0', 1);
		precision--;
	}
	return (size);
}

int				digits_precision(int precision, t_variables *p, char *flags)
{
	int size;

	size = 0;
	if (*(p->str) == '-')
	{
		size += ft_putchar_fd('-', 1);
		p->str += 1;
	}
	if (*flags == '-')
	{
		while (precision > ft_strlen(p->str))
		{
			size += ft_putchar_fd('0', 1);
			precision--;
		}
	}
	else
		size += normal_precision(precision, p->str);
	return (size);
}
