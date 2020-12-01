/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:27:03 by mamoussa          #+#    #+#             */
/*   Updated: 2020/11/30 13:01:14 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

size_t  check_for_pipe(t_cmd *cur_cmd)
{
    while (cur_cmd && (cur_cmd->type != semicolumn))
    {
        if (cur_cmd->type == pipee)
            return (1);
        cur_cmd = cur_cmd->next;
    }
    return (0);
}

void    ft_pipes(t_cmd *cur_cmd, t_pipe *cur_pipe)
{
    int     fd[2];

    // fd = (int*)malloc(sizeof(int)*2);
    if (check_for_pipe(cur_cmd))
    {
        pipe(fd);
        cur_pipe->fd0 = dup(fd[0]);
        cur_pipe->fd1 = dup(fd[1]);
        // close(fd[0]);
        // close(fd[1]);
    }
    // free(fd);
    // fd = NULL;
}