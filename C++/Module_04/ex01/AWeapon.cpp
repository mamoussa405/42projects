/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:21:50 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/13 15:45:04 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void){};

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
_Name(name), _ApCost(apcost), _Damage(damage){};

AWeapon::~AWeapon(void){};

AWeapon::AWeapon(AWeapon const & inst){
    *this = inst;
}

AWeapon&    AWeapon::operator=(AWeapon const & inst)
{
    this->_Name = inst._Name;
    this->_ApCost = inst._ApCost;
    this->_Damage = inst._Damage;
    return *this;
}

std::string   AWeapon::getName(void) const{
    return this->_Name;
}

int         AWeapon::getAPCost(void) const{
    return this->_ApCost;
}

int         AWeapon::getDamage(void) const{
    return this->_Damage;
}