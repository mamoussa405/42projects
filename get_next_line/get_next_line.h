/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:09:03 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/29 12:40:46 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2);
int		get_next_line(char **line);
size_t	ft_strlen(const char *s);
char	*ft_strdup(char *s1);
char	*ft_strchr(const char *s, int c);
#endif
