/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:14:13 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/29 12:40:08 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


void	memory_liberater(char **element1)
{
	free(*element1);
	element1 = NULL;
}

int		body_printer(char **left_saver, char **line, char **buffer)
{
	int		is_endline;
	char	*tmp;
	char	*endline_position;

	is_endline = 0;
	if ((endline_position = ft_strchr(*buffer, '\n')))
	{
		*endline_position = '\0';
		tmp = *left_saver;
		*left_saver = ft_strdup(++endline_position);
		free(tmp);
		is_endline = 1;
	}
	tmp = *line;
	*line = ft_strjoin(*line, *buffer);
	free(tmp);
	return (is_endline);
}

int		left_saver_check(char **left_saver, char **line)
{
	char	*endline_position;
	char	*tmp;

	endline_position = NULL;
	if (*left_saver)
	{
		if ((endline_position = ft_strchr(*left_saver, '\n')))
		{
			*endline_position = '\0';
			*line = ft_strdup(*left_saver);
			tmp = *left_saver;
			*left_saver = ft_strdup(++endline_position);
			free(tmp);
			return (1);
		}
		else
			*line = ft_strdup(*left_saver);
	}
	else
	{
		if (!(*line = malloc(1)))
			return (-1);
		*line[0] = '\0';
	}
	return (0);
}

int		get_next_line(char **line)
{
	int			ret;
	int			is_endline;
	char		*buffer;
	static char	*left_saver;

	is_endline = 0;
	if (read(0, NULL, 0) != 0 ||
	line == NULL || !(buffer = malloc(1024 + 1)))
		return (-1);
	is_endline = left_saver_check(&left_saver, line);
	while (!is_endline && (ret = read(0, buffer, 1024)))
	{
		buffer[ret] = '\0';
		is_endline = body_printer(&left_saver, line, &buffer);
	}
	memory_liberater(&buffer);
	if (!is_endline && ret <= 0)
	{
		free(left_saver);
		left_saver = NULL;
	}
	return (is_endline);
}

int main()
{
	// int fd = open("get_test", O_RDONLY);
	char *line;
	while (get_next_line(&line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
}