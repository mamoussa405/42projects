/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imp_pipes_red.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 17:06:56 by mamoussa          #+#    #+#             */
/*   Updated: 2020/12/02 09:50:21 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void    imp_red(void)
{
    if (g_is_in)
    {
        dup2(g_fd_in, 0);
        close(g_fd_in);
    }
    if (g_is_out)
    {
        dup2(g_fd_out, 1);
        close(g_fd_out);
    }
}

void    imp_pipes(t_pipe *cur)
{
    if (cur->index == 0 && (cur->fd1 > 2) && (cur->fd0 > 2) && !g_is_out)
    {
        if (dup2(cur->fd1, 1) < 0)
        {
            ft_error(strerror(errno));
            write(2, "\n", 1);
        }
        close(cur->fd0);
    }
    else if (cur->index > 0 && (cur->fd1 > 2) && (cur->prev->fd0 > 2))
    {
        if (!g_is_in)
        {
            if (dup2(cur->prev->fd0, 0) < 0)
            {
                ft_error(strerror(errno));
                write(2, "\n", 1);
            }
        }
        if (!g_is_out)
        {
            if (dup2(cur->fd1, 1) < 0)
            {
                ft_error(strerror(errno));
                write(2, "\n", 1);
            }
            close(cur->fd0);
        }
    }
    else if (cur->index > 0 && (cur->fd1 == 0) && (cur->fd0 == 0) && !g_is_in)
    {
        if (dup2(cur->prev->fd0, 0) < 0)
        {
            ft_error(strerror(errno));
            write(2, "\n", 1);
        }
    }
}
