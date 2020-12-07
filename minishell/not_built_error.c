/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_built_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:55:30 by mamoussa          #+#    #+#             */
/*   Updated: 2020/12/07 11:56:58 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

size_t  not_built_error(char **res, char *cmd)
{
	g_tmp = res[0];
	res[0] = (res[0][ft_strlen(res[0]) - 1] != '/') ?
	ft_strjoin(res[0], "/") : res[0];
	simple_pointer_free(g_tmp);
	g_tmp = res[0];
	res[0] = ft_strjoin(res[0], cmd);
	simple_pointer_free(g_tmp);
	if (open(res[0], O_RDONLY) > 0)
		return (1);
	simple_pointer_free(g_tmp);
}

size_t  not_built_error(void)
{
	char	**res;
	char	*cmd;
	size_t	i;

	i = 0;
	res = path_spliter();
	cmd = ft_strdup(g_cmd_head->string);
	while (res[i])
	{
		if (check_for_slash(cmd))
		{
            if (open(cmd, O_RDONLY) < 0)
                return (0);
		}
		else
			check_for_abspath_helper(&res[i], cmd);
		i++;
	}
	free(cmd);
	double_pointer_free(res);
	return (1);
}
