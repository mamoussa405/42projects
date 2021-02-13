/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:45:56 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/12 12:28:29 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void){};

Sorcerer::Sorcerer(std::string const Name, std::string const Title): _Name(Name), 
_Title(Title){
    std::cout<<_Name<<", "<<_Title<<", is born!"<<std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & inst)
{
    *this = inst;
}

Sorcerer&   Sorcerer::operator=(Sorcerer const & inst)
{
    this->_Name = inst._Name;
    this->_Title = inst._Title;
    return *this;
}

Sorcerer::~Sorcerer(void){
    std::cout<<_Name<<", "<<_Title<<", is dead. Consequences will never be the same!"<<std::endl;
}

std::string Sorcerer::getName(void) const{
    return this->_Name;
}

std::string Sorcerer::getTitle(void) const{
    return this->_Title;
}

void    Sorcerer::polymorph(Victim const & inst) const{
    inst.getPolymorphed();
}

std::ostream&   operator<<(std::ostream & out, Sorcerer const & inst)
{
    out<<"I am "<<inst.getName()<<", "<<inst.getTitle()<<", and I like ponies!"<<std::endl;
    return out;
}