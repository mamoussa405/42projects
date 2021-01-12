/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:50:50 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 16:50:03 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){};
Zombie::~Zombie(){
    std::cout<<"The Zombie "<<_name<<" died 👌"<<std::endl;
}

void Zombie::announce(void) const
{
    std::cout<<"< "<<this->_name<<" ("<<this->_type<<")"<<">"<<" Braiiiiiiinnnssss..."<<std::endl;
}

void Zombie::setNameAndType(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
}