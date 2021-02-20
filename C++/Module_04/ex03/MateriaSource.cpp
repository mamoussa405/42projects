/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:39:03 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/20 17:08:18 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void):_idx(0){}

MateriaSource::MateriaSource(MateriaSource const & inst)
{
    *this = inst;
}

MateriaSource::~MateriaSource(void){
    for(size_t i = 0; i < _idx; ++i)
    {
        delete(this->_source[i]);
        this->_source[i] = nullptr;
    }
}

MateriaSource&      MateriaSource::operator=(MateriaSource const & inst)
{
    for (size_t i = 0; i < this->_idx; ++i)
    {
        delete (this->_source[i]);
        this->_source[i] = nullptr;
    }
    for (size_t i = 0; i < inst._idx; i++)
    {
        this->_source[i] = inst._source[i]->clone();
        *(this->_source[i]) = *(inst._source[i]);
    }
    this->_idx = inst._idx; 
   return  *this;
}

void    MateriaSource::learnMateria(AMateria* ob)
{
    if (_idx < 4)
        this->_source[_idx++] = ob;
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < this->_idx; ++i)
    {
        if (this->_source[i]->getType() == type)
            return this->_source[i]->clone();
    }
   return 0; 
}