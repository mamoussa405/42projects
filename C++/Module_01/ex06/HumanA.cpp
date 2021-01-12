/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:34:20 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/09 17:06:31 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon &inst):_name(name),_inst(inst){};

HumanA::~HumanA(){};

void    HumanA::attack(void) const
{
    std::cout<<this->_name<<" attacks with his "<<this->_inst.getType()<<std::endl;
}
