/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:15:49 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/09 17:25:35 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const name):_name(name){};

HumanB::~HumanB(){};

void    HumanB::setWeapon(Weapon& ref)
{
    this->_inst = &ref;
}

void    HumanB::attack(void) const
{
    std::cout<<this->_name<<" attacks with his "<<this->_inst->getType()<<std::endl;
}