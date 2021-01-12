/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:07:20 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 16:00:33 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){};

ZombieEvent::~ZombieEvent(){
    std::cout<<"End of ZombieEvent"<<std::endl;
}

void        ZombieEvent::setZombieType(std::string const type)
{
    this->_type  = type;
}

Zombie*     ZombieEvent::newZombie(std::string name) 
{
    Zombie* zombieMember = new Zombie(this->_type, name);
    return (zombieMember);
}

void    randomChump(ZombieEvent& inst)
{
    std::string names[10] = {"Grower", "Reliver", "Licker", "Dancer", "Spoiled Zombie",
                        "Grasper", "Evolver", "Swimmer", "Squealer", "Spittle Zombie"};
    unsigned int    index;
    Zombie*         zombeMember;

    index = rand() % 10;
    zombeMember = inst.newZombie(names[index]);
    zombeMember->announce();
    delete(zombeMember);
}