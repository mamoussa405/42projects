/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 22:48:15 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/02 21:27:17 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int compteur;
	int size;
	int swap;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	compteur = 0;
	while (size > compteur)
	{
		swap = str[size - 1];
		str[size - 1] = str[compteur];
		str[compteur] = swap;
		size--;
		compteur++;
	}
	return (str);
}
