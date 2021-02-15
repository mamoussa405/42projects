/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:57:10 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/15 11:09:56 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void){}

Character::Character(std::string const & name): _Name(name), _AP(40), _ptr(NULL){}

Character::Character(Character const & inst)
{
    *this = inst;
}

Character&  Character::operator=(Character const & inst)
{
    this->_AP = inst._AP;
    this->_Name = inst._Name;
    this->_ptr = inst._ptr;
    return *this;
}

Character::~Character(void){}

void    Character::recoverAP(void){
    int res = this->_AP + 10;
    this->_AP = (res <= 40) ? res : this->_AP;
}

void    Character::equip(AWeapon*   w_ptr)
{
    this->_ptr = w_ptr;
    this->_AP -= w_ptr->getAPCost();
}

void    Character::attack(Enemy*    e_ptr)
{
    if (!_ptr || this->_AP <= 0)
        return;
    std::cout<<this->_Name<<" attacks "<<e_ptr->getType()<<" with a "<<this->_ptr->getName()<<std::endl;
    this->_ptr->attack();
    e_ptr->takeDamage(this->_ptr->getDamage());
    if (e_ptr->getHP() <= 0)
        delete(e_ptr);
}

std::string const Character::getName(void) const
{
    return this->_Name;
}

int             Character::getAP(void) const
{
    return this->_AP;
}

AWeapon*       Character::getWeapon(void) const
{
    return this->_ptr;
}

std::ostream&   operator<<(std::ostream & out, Character const & inst)
{
    if (_ptr)
        out<<inst.getName()<<" has "<<inst.getAP()<<" AP and wields a "<<
        inst.getWeapon()->getName()<<std::endl;
    else
        out<<inst.getName()<<" has "<<inst.getAP()<<" AP and is unarmed"<<std::endl;
    return out;
}