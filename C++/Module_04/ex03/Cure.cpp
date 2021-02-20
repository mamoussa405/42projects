/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:26:16 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/20 17:08:30 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure"){}

Cure::~Cure(void){}

AMateria*   Cure::clone(void) const
{
    AMateria *inst = new Cure();
    return inst;
}

void        Cure::use(ICharacter& target)
{
    std::cout<<"* heals "<<target.getName()<<"'s wounds *"<<std::endl;
    this->_xp += 10;
}