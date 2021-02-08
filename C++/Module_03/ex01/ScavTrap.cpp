/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:00:23 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/08 10:43:53 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const & name):_HitPoints(100), _MaxHitPoints(100), _EnergyPoints(50),
_MaxEnergyPoints(50), _Level(1), _Name(name), _MeleeAttackDamage(20), _RangedAttackDamage(15),
_ArmorDamageReduction(3){
    std::cout<<"ScavTrap Constructor called"<<std::endl;
};

ScavTrap::ScavTrap(void){};

ScavTrap::ScavTrap(ScavTrap const & inst){
    *this = inst;
};

ScavTrap&       ScavTrap::operator=(ScavTrap const & inst)
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
ScavTrap::~ScavTrap(void){
    std::cout<<"ScavTrap Destructor called"<<std::endl;
}

void		ScavTrap::rangedAttack(std::string const & target) const{
    std::cout<<"SC4G-TP "<<this->_Name<<" attacks "<<target<<" at range, causing "
    <<this->_RangedAttackDamage<<" points of damage!"<<std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target) const{
	std::cout<<"SC4G-TP "<<this->_Name<<" attacks "<<target<<" at melee, causing "
	<<this->_MeleeAttackDamage<<" points of damage!"<<std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount){
	std::cout<<"it's a Damage "<<"-"<<amount<<" points"<<std::endl;
	int res = this->_HitPoints - amount + this->_ArmorDamageReduction;
	if (res <= 0)
	{
		std::cout<<"you dies"<<std::endl;
		this->_HitPoints = 0;
	}
	else
		this->_HitPoints = (res >= this->_MaxHitPoints) ? this->_MaxHitPoints:res;
}

void		ScavTrap::beRepaired(unsigned int amount){
	std::cout<<"Finally it's a repair "<<"+"<<amount<<" points"<<std::endl;
	int res =  this->_HitPoints + amount;
	this->_HitPoints = (res >= this->_MaxHitPoints) ? this->_MaxHitPoints:res;
	res = this->_EnergyPoints + amount;
	this->_EnergyPoints = (res >= this->_MaxEnergyPoints) ? this->_MaxEnergyPoints:res;
}

void        ScavTrap::challengeNewcomer(void) const{
    std::string challenges[4] = {"Jump the door", "Answer my question: what is the answer of everything?",
    "spell ScavTrap backword", "how old am i?"};
    std::cout<<challenges[rand() % 4]<<std::endl;
}

int		ScavTrap::getHitPoints(void) const{
	return this->_HitPoints;
}

int		ScavTrap::getEnergyPoints(void) const{
	return this->_EnergyPoints;
}