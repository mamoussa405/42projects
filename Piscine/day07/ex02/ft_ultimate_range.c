/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 22:14:15 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/12 14:45:15 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int j;
	int save;

	j = 0;
	save = min;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = (int *)malloc(sizeof(int *) * (max - min));
	while (min < max)
	{
		range[0][j] = min;
		min++;
		j++;
	}
	return (max - save);
}
