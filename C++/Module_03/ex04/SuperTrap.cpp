/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:54:42 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/09 12:11:43 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void){};

SuperTrap::~SuperTrap(void){
    std::cout<<"SuperTrap destructor called"<<std::endl;
}

SuperTrap::SuperTrap(std::string name){
    std::cout<<FragTrap::_ArmorDamageReduction << " " << NinjaTrap::_ArmorDamageReduction << std::endl;
};