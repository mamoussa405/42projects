/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:59:19 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/10 14:56:22 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	std::cout<<"ClapTrap constructor called"<<std::endl;
};

ClapTrap::~ClapTrap(void){
    std::cout<<"ClapTrap destructor called"<<std::endl;
};

ClapTrap::ClapTrap(ClapTrap const & inst)
{
    *this = inst;
}

ClapTrap::ClapTrap(int hp, int mhp, int ep, int mep, int lvl, std::string name,
int meleeA, int rangedA, int ArmorD):_HitPoints(hp), _MaxHitPoints(mhp),_EnergyPoints(ep),
_MaxEnergyPoints(mep), _Level(lvl), _Name(name), _MeleeAttackDamage(meleeA), _RangedAttackDamage(rangedA),
_ArmorDamageReduction(ArmorD){
    std::cout<<"ClapTrap constructor called"<<std::endl;
};

void		ClapTrap::takeDamage(unsigned int amount){
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

void		ClapTrap::beRepaired(unsigned int amount){
	std::cout<<"Finally it's a repair "<<"+"<<amount<<" points"<<std::endl;
	int res =  this->_HitPoints + amount;
	this->_HitPoints = (res >= this->_MaxHitPoints) ? this->_MaxHitPoints:res;
	res = this->_EnergyPoints + amount;
	this->_EnergyPoints = (res >= this->_MaxEnergyPoints) ? this->_MaxEnergyPoints:res;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & inst)
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

int		ClapTrap::getHitPoints(void) const{
	return this->_HitPoints;
}

int	    ClapTrap::getEnergyPoints(void) const{
	return this->_EnergyPoints;
}