/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits_assist.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 21:38:20 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/12 21:11:18 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_digits_assist(char *flags, t_variables *p)
{
	p->num_space = normal_width_digit(p->num_space, flags, p);
	p->size += digits_precision(p->prc, p, flags);
	if (*(p->str) != ' ')
		p->size += ft_putstr_fd(p->str, 1);
	left_width_digit(p->num_space, p);
}
