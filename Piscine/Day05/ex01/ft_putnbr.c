/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:39:57 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/11 14:40:13 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int div;

	div = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		div = div * -1;
	}
	if (div > 9)
	{
		ft_putnbr(div / 10);
		ft_putchar((div % 10) + '0');
	}
	if (div <= 9)
		ft_putchar(div + '0');
}
