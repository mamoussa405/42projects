/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:18:08 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 17:47:53 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(unsigned int N):_N(N){
    _zombies = new Zombie[_N];
    std::string names[10] = {"Grower", "Reliver", "Licker", "Dancer", "Spoiled Zombie",
                        "Grasper", "Evolver", "Swimmer", "Squealer", "Spittle Zombie"};
    std::string type[2] = {"night", "day"};

    for(unsigned int i = 0; i < _N; ++i)
        _zombies[i].setNameAndType(names[rand() % 10], type[rand() % 2]);
}

ZombieHorde::~ZombieHorde(){
    delete [] _zombies;
    std::cout<<"End of ZombieHorde"<<std::endl;
}

void    ZombieHorde::announce(void) const
{
    for (size_t i = 0; i < this->_N; ++i)
        this->_zombies[i].announce();
}