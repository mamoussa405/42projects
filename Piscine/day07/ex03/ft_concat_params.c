/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:30:04 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/12 00:12:03 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int j;
	int i;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 1;
	k = 0;
	while (j < argc)
	{
		i = i + ft_strlen(argv[j]);
		j++;
	}
	i = 1;
	str = (char *)malloc(sizeof(*str) * (i + argc - 1));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			str[k++] = argv[i][j++];
		str[k++] = '\n';
		i++;
	}
	str[--k] = '\0';
	return (str);
}
