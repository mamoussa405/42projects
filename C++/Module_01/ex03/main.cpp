/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:56:14 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 16:58:10 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
    ZombieHorde inst = ZombieHorde(10);

    inst.announce();
    return 0;
}