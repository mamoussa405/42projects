/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:54:42 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/09 19:25:10 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void){};

SuperTrap::~SuperTrap(void){
    std::cout<<"SuperTrap destructor called"<<std::endl;
}

SuperTrap::SuperTrap(std::string name){
    std::cout<<"SuperTrap constructor called"<<std::endl;
    this->_HitPoints = 100;
    this->_MaxHitPoints = 100;
    this->_EnergyPoints = 120;
    this->_MaxEnergyPoints = 120;
    this->_Level = 1;
    this->_Name = name;
    this->_MeleeAttackDamage = 60;
    this->_RangedAttackDamage = 20;
    this->_ArmorDamageReduction = 5;
};

SuperTrap::SuperTrap(SuperTrap const & inst)
{
    *this = inst;
}

SuperTrap&  SuperTrap::operator=(SuperTrap const & inst)
{
    this->_MaxHitPoints = inst._MaxHitPoints;
    this->_HitPoints = inst._HitPoints;
    this->_EnergyPoints = inst._EnergyPoints;
    this->_MaxEnergyPoints = inst._MaxEnergyPoints;
    this->_Level = inst._Level;
    this->_Name = inst._Name;
    this->_MeleeAttackDamage = inst._MeleeAttackDamage;
    this->_RangedAttackDamage = inst._RangedAttackDamage;
    this->_ArmorDamageReduction = inst._ArmorDamageReduction;
    return *this;
}

void       SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}

void       SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
}