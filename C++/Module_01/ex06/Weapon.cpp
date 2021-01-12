/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:29:34 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/09 16:32:58 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const type):_type(type){};

Weapon::~Weapon(){};

const std::string&  Weapon::getType(void) const
{
    return (this->_type);
}

void                Weapon::setType(std::string const type)
{
    this->_type = type;
}