/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:50:41 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/07 10:39:39 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr_fd(char *s, int fd)
{
	int size;

	size = 0;
	if (s)
		while (*s != '\0')
		{
			size += ft_putchar_fd(*s, fd);
			s++;
		}
	return (size);
}
