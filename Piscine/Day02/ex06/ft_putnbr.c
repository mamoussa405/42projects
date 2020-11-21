/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 15:17:55 by mamoussa          #+#    #+#             */
/*   Updated: 2019/08/28 18:48:54 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int div;
	int modulo;

	if ((nb <= 9) && (nb >= 0))
	{
		ft_putchar(nb + '0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb > 10)
	{
		div = nb / 10;
		modulo = (nb % 10) + '0';
		if (div > 9)
		{
			ft_putnbr(div);
		}
		if (div <= 9)
			ft_putchar(div + '0');
		ft_putchar(modulo);
	}
}
