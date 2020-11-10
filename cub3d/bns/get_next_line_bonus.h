/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:09:03 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:20:14 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2);
int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *s);
char	*ft_strdup(char *s1);
char	*ft_strchr(const char *s, int c);
#endif
