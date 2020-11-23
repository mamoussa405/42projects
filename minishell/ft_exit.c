/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:11:48 by mamoussa          #+#    #+#             */
/*   Updated: 2020/11/23 17:11:33 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void    ft_exit(void)
{
    if (ft_strncmp("exit", g_cmd_head->string, ft_strlen(g_cmd_head->string)))
    {
        ft_error("command not found:");
        write(1, g_cmd_head->string, ft_strlen(g_cmd_head->string));
        write(1, "\n", 1);
        return ;
    }
    exit(0);
}