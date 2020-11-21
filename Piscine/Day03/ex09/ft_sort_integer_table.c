/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 00:22:21 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/03 14:35:33 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int swp;
	int j;

	i = 0;
	swp = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				swp = tab[j];
				tab[j] = tab[i];
				tab[i] = swp;
			}
			j++;
		}
		j = i + 1;
		i++;
	}
}
