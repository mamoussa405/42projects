/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:12:06 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/10 14:59:26 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void){
    std::cout<<"NinjaTrap constructor called"<<std::endl;
};

NinjaTrap::NinjaTrap(std::string const name):ClapTrap(60,60,120,120,1,name,60,5,0){
    std::cout<<"NinjaTrap constructor called"<<std::endl;
};

NinjaTrap::~NinjaTrap(void){
    std::cout<<"NinjaTrap desctructor called"<<std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & inst){
    *this = inst;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const & inst){
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

void		NinjaTrap::rangedAttack(std::string const & target) const{
    std::cout<<"NJ4G-TP "<<this->_Name<<" attacks "<<target<<" at range, causing "
    <<this->_RangedAttackDamage<<" points of damage!"<<std::endl;
}

void		NinjaTrap::meleeAttack(std::string const & target) const{
	std::cout<<"NJ4G-TP "<<this->_Name<<" attacks "<<target<<" at melee, causing "
	<<this->_MeleeAttackDamage<<" points of damage!"<<std::endl;
}
void       NinjaTrap::ninjaShoebox(FragTrap & inst) const
{
    std::cout<<"Attack with the FragTrap ClapTrap: this is its RangedAttack"<<std::endl;
    inst.rangedAttack("Konoha");
}

void       NinjaTrap::ninjaShoebox(ScavTrap & inst) const
{
    std::cout<<"Attack with the ScavTrap ClapTrap: this is its RangedAttack"<<std::endl;
    inst.rangedAttack("Konoha");
}

void       NinjaTrap::ninjaShoebox(NinjaTrap & inst) const
{
    std::cout<<"Attack with the NinjaTrap ClapTrap: this is its RangedAttack"<<std::endl;
    inst.rangedAttack("Konoha");
}