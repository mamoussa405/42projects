/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:53:15 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/20 16:14:49 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void):AMateria("ice"){}

Ice::~Ice(void){}

AMateria* Ice::clone(void) const{
    AMateria* inst = new Ice();
    return inst;
}

void      Ice::use(ICharacter& target)
{
    std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
    this->_xp += 10;
}