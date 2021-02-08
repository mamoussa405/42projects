/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 11:20:06 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/08 09:52:14 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const & name):ClapTrap(100,100,100,100,1,name,30,20,5){
    std::cout<<"FragTrap Constructor called"<<std::endl;
};

FragTrap::FragTrap(void){};

FragTrap::FragTrap(FragTrap const & inst){
    *this = inst;
};

FragTrap&       FragTrap::operator=(FragTrap const & inst)
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
FragTrap::~FragTrap(void){
    std::cout<<"FragTrap Destructor called"<<std::endl;
}

void		FragTrap::rangedAttack(std::string const & target) const{
    std::cout<<"FR4G-TP "<<this->_Name<<" attacks "<<target<<" at range, causing "
    <<this->_RangedAttackDamage<<" points of damage!"<<std::endl;
}

void		FragTrap::meleeAttack(std::string const & target) const{
	std::cout<<"FR4G-TP "<<this->_Name<<" attacks "<<target<<" at melee, causing "
	<<this->_MeleeAttackDamage<<" points of damage!"<<std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string attacks[5] = {"superAttack", "mamoussaAttack", "rasinganAttack",
							"42Attack", "amaturasAttack"};
	int			damagePoints[5] = {20, 5, 40, 15, 100};
	if (this->_EnergyPoints >= 25)
	{
		std::cout<<"FR4G-TP "<<attacks[rand()%5]<<" attacks "<<target<<" causing "
		<<damagePoints[rand()%5]<<" points of damage!"<<std::endl;
		this->_EnergyPoints -= 25;
	}
	else
		std::cout<<"No enough energy"<<std::endl;
}