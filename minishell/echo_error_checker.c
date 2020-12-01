/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo_error_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:18:33 by mamoussa          #+#    #+#             */
/*   Updated: 2020/11/25 14:39:18 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

char    *search_for_slash(char *str, char c)
{
    while (*str)
    {
        if (*str == c)
            return (str);
        str++;
    }
    return (NULL);
}

size_t  echo_error_checker(void)
{
    if (ft_strncmp("echo", g_cmd_head->string, ft_strlen(g_cmd_head->string)))
    {
        if (search_for_slash(g_cmd_head->string, '/'))
        {
            ft_error(g_cmd_head->string);
            write(1, ":", 1);
            write(1, " No such file or directory\n", 
            ft_strlen(" No such file or directory\n"));
        }
        else
        {
            ft_error(g_cmd_head->string);
            write(1, ":", 1);
            write(1, " command not found\n", ft_strlen(" command not found\n"));
        }
        return (1);
    }
    return (0);
}