/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:25:13 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/21 15:52:22 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void){
    std::cout<<"* teleports from space *"<<std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & inst)
{
    *this = inst;
}

AssaultTerminator&  AssaultTerminator::operator=(AssaultTerminator const & inst)
{
    (void)inst;
    return *this;
}

AssaultTerminator::~AssaultTerminator(void){
    std::cout<<"I’ll be back..."<<std::endl;
}

ISpaceMarine*     AssaultTerminator::clone(void) const
{
    return (ISpaceMarine*)this;
}

void              AssaultTerminator::battleCry(void) const
{
    std::cout<<"This code is unclean. PURIFY IT!"<<std::endl;
}

void             AssaultTerminator::rangedAttack(void) const
{
    std::cout<<"* does nothing *"<<std::endl;
}

void            AssaultTerminator::meleeAttack(void) const
{
    std::cout<<"* attacks with chainfists *"<<std::endl;
}