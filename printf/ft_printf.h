/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 15:00:47 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/12 21:46:01 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int				ft_putchar_fd(char c, int fd);
int				ft_char_printer(char *flags, va_list args);
int				ft_strlen(const char *s);
int				ft_atoim(const char *str);
int				ft_string_printer(char *flags, va_list args);
int				ft_putstr_fd(char *s, int fd);
char			*ft_strchr(const char *s, int c);
int				ft_atoi(const char *str);
int				ft_strings_precision(int precision, char *string, char *flags);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_printf(const char *format, ...);
int				ft_pointer_printer(char *flags, va_list args);
char			*hexa_convert(unsigned long nb, int cap);
char			*ft_strdup(char const *s1);
char			*ft_strrev(char *str);
char			*ft_strcapitalize(char *str);
char			*ft_itoa(long n);
int				ft_digits_printer(char *flags, va_list args);
typedef	struct	s_variables
{
	int				m_w;
	int				prc;
	char			*pr;
	char			*tmp;
	int				min;
	int				max;
	int				save;
	int				len;
	int				type;
	int				size;
	int				num_space;
	char			*str;
}				t_variables;
int				digits_precision(int precision, t_variables *p, char *flags);
void			ft_digits_assist(char *flags, t_variables *p);
int				normal_width_digit(int width, char *flags, t_variables *p);
void			left_width_digit(int spaces, t_variables *p);
int				ft_unsigned_digits_printer(char *flags, va_list args);
void			ft_udigits_assist(char *flags, t_variables *p);
int				normal_width_udigit(int width, char *flags, t_variables *p);
void			left_width_udigit(int spaces, t_variables *p);
int				udigits_precision(int precision, t_variables *p, char *flags);
int				ft_hexa_printer(char *flags, va_list args, const char *format);
int				ft_percent_printer(char *flags, va_list args,
const char *format);
#endif
