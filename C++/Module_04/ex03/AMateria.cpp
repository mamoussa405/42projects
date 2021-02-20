/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:31:09 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/20 16:30:19 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void){}

AMateria::AMateria(std::string const & type):_type(type), _xp(0){}

AMateria::AMateria(AMateria const & inst)
{
    *this = inst;
}

AMateria& AMateria::operator=(AMateria const & inst) {
    this->_xp = inst._xp;
    return *this;
}

AMateria::~AMateria(void){}

std::string const & AMateria::getType(void) const
{
    return this->_type;
}

unsigned int    AMateria::getXP(void) const
{
    return this->_xp;
}