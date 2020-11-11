/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 14:58:55 by mamoussa          #+#    #+#             */
/*   Updated: 2019/12/06 12:39:25 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*format_type_check(const char **format)
{
	int		i;
	char	*flags_saver;
	char	*save;
	char	*tmp;

	i = 0;
	flags_saver = malloc(1);
	*flags_saver = '\0';
	save = malloc(1);
	while (*format[0] != 'c' && *format[0] != 's' && *format[0] != 'p' &&
	*format[0] != 'd' && *format[0] != 'i' && *format[0] != 'u' &&
	*format[0] != 'x' && *format[0] != 'X' && *format[0] != '%')
	{
		*save = *format[0];
		tmp = flags_saver;
		flags_saver = ft_strjoin(flags_saver, save);
		free(tmp);
		*format += 1;
	}
	free(save);
	return (flags_saver);
}

int		ft_printf_assist(char *flags, va_list args, const char *format)
{
	int size;

	size = 0;
	if (*format == '%')
		size += ft_percent_printer(flags, args, format);
	if (*format == 'c')
		size += ft_char_printer(flags, args);
	if (*format == 's')
		size += ft_string_printer(flags, args);
	if (*format == 'p')
		size += ft_pointer_printer(flags, args);
	if (*format == 'd' || *format == 'i')
		size += ft_digits_printer(flags, args);
	if (*format == 'u')
		size += ft_unsigned_digits_printer(flags, args);
	if (*format == 'x' || *format == 'X')
		size += ft_hexa_printer(flags, args, format);
	return (size);
}

int		ft_printf(const char *format, ...)
{
	va_list args;
	char	*flags_saver;
	int		size;
	char	*tmp;

	size = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			flags_saver = format_type_check(&format);
			tmp = flags_saver;
			size += ft_printf_assist(flags_saver, args, format);
		}
		else
			size += ft_putchar_fd(*format, 1);
		format++;
	}
	free(tmp);
	va_end(args);
	return (size);
}
