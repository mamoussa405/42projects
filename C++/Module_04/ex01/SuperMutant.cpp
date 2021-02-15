/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:33:35 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/15 15:13:08 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant"){
    std::cout<<"Gaaah. Me want smash heads!"<<std::endl;
}

SuperMutant::~SuperMutant(void){
    std::cout<<"Aaargh..."<<std::endl;
}

void    SuperMutant::takeDamage(int amount)
{
    amount -= 3;
    Enemy::takeDamage(amount);
}