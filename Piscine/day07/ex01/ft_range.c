/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:37:32 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/11 23:55:03 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ptr;
	int j;

	j = 0;
	ptr = 0;
	if (min >= max)
		return (ptr);
	else
	{
		ptr = (int *)malloc(sizeof(int*) * (max - min));
		while (min < max)
		{
			ptr[j] = min;
			min++;
			j++;
		}
	}
	return (ptr);
}
