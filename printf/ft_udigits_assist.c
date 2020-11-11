/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_udigits_assist.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:44:31 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/12 21:09:51 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_udigits_assist(char *flags, t_variables *p)
{
	p->num_space = normal_width_udigit(p->num_space, flags, p);
	p->size += udigits_precision(p->prc, p, flags);
	if (*(p->str) != ' ')
		p->size += ft_putstr_fd(p->str, 1);
	left_width_udigit(p->num_space, p);
}
