/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:50:50 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 16:03:42 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string const type, std::string const name): _type(type), _name(name){};
Zombie::~Zombie(){
    std::cout<<"The Zombie "<<_name<<" died 👌"<<std::endl;
}

void Zombie::announce(void) const
{
    std::cout<<"< "<<this->_name<<" ("<<this->_type<<")"<<">"<<" Braiiiiiiinnnssss..."<<std::endl;
}