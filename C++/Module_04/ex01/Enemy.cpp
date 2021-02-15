/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:19:15 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/13 16:26:00 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void){};

Enemy::Enemy(int hp, std::string const & type): _HP(hp), _Type(type){};

Enemy::Enemy(Enemy const & inst)
{
    *this = inst;
}

Enemy::~Enemy(void){};

Enemy&    Enemy::operator=(Enemy const & inst)
{
    this->_HP = inst._HP;
    this->_Type = inst._Type;
    return *this;
}

std::string Enemy::getType(void) const{
    return this->_Type;
}

int         Enemy::getHP(void) const{
    return this->_HP;
}

void    Enemy::takeDamage(int amount){
    if (amount < 0)
        return;
    this->_HP -= amount;
}