/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 00:44:58 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/12 19:56:09 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_word(char *str)
{
	int c;

	c = 1;
	if (*str == '\0')
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str)
	{
		if ((*str == '\n' || *str == '\t' || *str == ' ') && (*(str + 1) > 32))
		{
			if (*(str + 1) != '\0')
				c++;
			str++;
		}
		else
			str++;
	}
	return (c);
}

char	**ft_split_whitespaces(char *str)
{
	int		c;
	char	**ptr;

	c = count_word(str);
	ptr = (char **)malloc(sizeof(char**) * (c + 1));
	if (!ptr)
		return (0);
	while (*str)
	{
		while ((*str == '\n' || *str == '\t' || *str == ' ') && (*str != '\0'))
		{
			*str = '\0';
			str++;
		}
		if ((*str != '\0') && !(*str == '\n' || *str == '\t' || *str == ' '))
		{
			*ptr = str;
			ptr++;
		}
		while ((*str != '\0') && !(*str == '\n' || *str == '\t' || *str == ' '))
			str++;
	}
	*ptr = 0;
	return (ptr - c);
}
