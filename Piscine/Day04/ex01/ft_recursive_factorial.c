/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 16:22:34 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/03 18:42:52 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int fct;

	fct = 1;
	if (nb > 0 && nb <= 12)
	{
		if (nb >= 1)
		{
			fct = nb * ft_recursive_factorial(nb - 1);
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
