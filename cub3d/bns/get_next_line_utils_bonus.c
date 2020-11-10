/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:40:49 by mamoussa          #+#    #+#             */
/*   Updated: 2020/01/20 15:06:07 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strcp(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strl(const char *s)
{
	size_t compt;

	compt = 0;
	while (*s != '\0')
	{
		s++;
		compt++;
	}
	return (compt);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strl(s1);
	j = ft_strl(s2);
	str = malloc(sizeof(char) * (j + i) + 1);
	if (!str)
		return (NULL);
	ft_strcp(str, (char *)s1);
	ft_strcp(str + i, (char *)s2);
	return (str);
}

char	*ft_strdup(char *s1)
{
	char	*str;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	return (ft_strcp(str, s1));
}

char	*ft_strchr(const char *s, int c)
{
	char	j;
	char	*ptr;
	int		i;

	j = c;
	ptr = (char *)s;
	i = 0;
	while (ptr[i])
		i++;
	if (j == '\0')
		return (ptr + i);
	while (*ptr)
	{
		if (*ptr == j)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
