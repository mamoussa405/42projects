/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:27:44 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/21 14:56:30 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void){}

Character::Character(std::string const & name):_Name(name),_index(0){}

Character::Character(Character const & inst)
{
    *this = inst;
}

Character&  Character::operator=(Character const & inst)
{
    for (size_t i = 0; i < this->_index; ++i)
    {
        delete(this->_inv[i]);
        this->_inv[i] = nullptr;
    }
    for (size_t i = 0; i < inst._index; ++i)
    {
        this->_inv[i] = inst._inv[i]->clone();
        *(this->_inv[i]) = *(inst._inv[i]);
    }
    this->_index = inst._index;
    this->_Name = inst._Name;
    return *this; 
}

Character::~Character(void){
    for (size_t i = 0; i < this->_index; i++)
    {
        delete(this->_inv[i]);
        this->_inv[i] = nullptr;
    }
}

std::string const & Character::getName(void) const{
    return this->_Name;
}

void                Character::equip(AMateria* m)
{
    if (this->_index < 4)
        this->_inv[this->_index++] = m;
}

void                Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < (int)this->_index)
    {
        if (this->_inv[idx])
            this->_inv[idx]->use(target);
    }
}

void               Character::unequip(int idx)
{
    if (idx >= 0 && idx < (int)this->_index)
    {
        if (this->_inv[idx])
            this->_inv[idx] = nullptr;
    }
}