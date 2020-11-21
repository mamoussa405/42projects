/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 15:06:07 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/03 18:39:22 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fct;
	int i;

	fct = 1;
	i = 1;
	if (nb > 0 && nb <= 12)
	{
		while (i <= nb)
		{
			fct = fct * i;
			i++;
		}
	}
	else if (nb == 0)
	{
		fct = 1;
	}
	else
	{
		fct = 0;
	}
	return (fct);
}
