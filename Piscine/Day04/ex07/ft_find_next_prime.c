/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 16:54:39 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/07 13:11:39 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int result;
	int i;
	int j;

	result = 0;
	i = 1;
	j = 0;
	if (nb <= 1)
		result = 2;
	else
		while (i <= nb)
		{
			if ((nb % i) == 0)
				j++;
			if (j == 2)
				result = nb;
			else if (j > 2)
			{
				nb++;
				i = 0;
				j = 0;
			}
			i++;
		}
	return (result);
}
