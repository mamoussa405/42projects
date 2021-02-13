/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:32:46 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/12 12:28:40 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void){};

Victim::Victim(std::string const Name): _Name(Name){
    std::cout<<"Some random victim called "<<_Name<<" just appeared!"<<std::endl;
}

Victim::Victim(Victim const & inst)
{
    *this = inst;
}

Victim& Victim::operator=(Victim const & inst)
{
    this->_Name = inst._Name;
    return *this;
}

Victim::~Victim(void){
    std::cout<<"Victim "<<_Name<<" just died for no apparent reason!"<<std::endl;
}

std::string Victim::getName(void) const
{
    return this->_Name;
}

void    Victim::getPolymorphed(void) const{
    std::cout<<this->_Name<<" has been turned into a cute little sheep!"<<std::endl;
}

std::ostream&   operator<<(std::ostream & out, Victim const & inst){
    out<<"I'm "<<inst.getName()<<" and I like otters!"<<std::endl;
    return out;
}