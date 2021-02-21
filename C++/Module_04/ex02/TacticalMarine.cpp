/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:52:42 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/21 15:54:50 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void){
    std::cout<<"Tactical Marine ready for battle!"<<std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & inst)
{
    *this = inst;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const & inst)
{
    (void)inst;
    return *this;
}

TacticalMarine::~TacticalMarine(void){
    std::cout<<"Aaargh..."<<std::endl;
}

ISpaceMarine*     TacticalMarine::clone(void) const
{
    return (ISpaceMarine*)this;
}

void              TacticalMarine::battleCry(void) const
{
    std::cout<<"For the holy PLOT!"<<std::endl;
}

void             TacticalMarine::rangedAttack(void) const
{
    std::cout<<"* attacks with a bolter *"<<std::endl;
}

void            TacticalMarine::meleeAttack(void) const
{
    std::cout<<"* attacks with a chainsword *"<<std::endl;
}