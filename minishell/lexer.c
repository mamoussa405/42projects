/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:55:54 by mbani             #+#    #+#             */
/*   Updated: 2020/12/11 12:28:09 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

int		add_string(char *line, enum e_quotes *sngl, enum e_quotes *dbl)
{
	int		i;
	int		j;
	int		sep;
	char	*tmp;
	char	*op;

	i = 0;
	tmp = ft_strdup(line);
	while (tmp[i])
	{
		j = 0;
		quote_check(sngl, dbl, tmp, i);
		if (*sngl == 1 || *dbl == 1)
			i += quoted_str(tmp + i, sngl, dbl);
		sep = separators_check(&tmp, &i, &op, &j);
		if (sep == 1)
			continue ;
		else if (sep == 0)
			break ;
		i++;
	}
	return (add_to_list_bulk(&tmp, &op, &i, &j));
}

void	line_split(char *line)
{
	int				i;
	enum e_quotes	sngl;
	enum e_quotes	dbl;

	i = 0;
	sngl = 0;
	dbl = 0;
	while (line[i])
	{
		while (line[i] == ' ' || line[i] == '\t')
			i++;
		if (line[i])
			i += add_string(line + i, &sngl, &dbl);
	}
	red_file_cmd(g_cmd_head);
}
