/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:09:13 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/12 17:04:14 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void){};

Peon::Peon(Peon const & inst)
{
    *this = inst;
}

Peon::Peon(std::string  const Name): Victim(Name){
    std::cout<<"Zog zog."<<std::endl;
}

Peon::~Peon(void)
{
    std::cout<<"Bleuark..."<<std::endl;
}

void    Peon::getPolymorphed(void) const{
    std::cout<<this->_Name<<" has been turned into a pink pony!"<<std::endl;
}

//Mamoussa class implementation

Mamoussa::Mamoussa(void){};

Mamoussa::Mamoussa(Mamoussa const & inst)
{
    *this = inst;
}

Mamoussa::Mamoussa(std::string const Name): Victim(Name) {
    std::cout<<"Mamoussa Zog zog."<<std::endl;
}

Mamoussa::~Mamoussa(void)
{
    std::cout<<"Mamoussa Bleuark..."<<std::endl;
}

void    Mamoussa::getPolymorphed(void) const{
    std::cout<<this->_Name<<" has been turned into a green tree!"<<std::endl;
}