/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:10:09 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/21 18:23:09 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void): _arr(NULL), _size(0){}

Squad::~Squad(void)
{
    for (size_t i = 0; i < this->_size; ++i)
    {
        delete this->_arr[i];
        this->_arr[i] = nullptr;
    }
    delete [] this->_arr; 
    this->_arr = nullptr;
}

Squad::Squad(Squad const & inst)
{
    *this = inst;
}

Squad&  Squad::operator=(Squad const & inst)
{ 
    if (this->_arr)
    {
        for (size_t i = 0; i < this->_size; ++i)
        {
            delete this->_arr[i];
            this->_arr[i] = nullptr;
        }
        delete [] this->_arr; 
        this->_arr = nullptr;
    }
    this->_arr = new ISpaceMarine*[inst._size];
    this->_size = inst._size;
    for (size_t i = 0; i < this->_size; ++i)
    {
        this->_arr[i] = inst._arr[i]->clone();
        *(this->_arr[i]) = *(inst._arr[i]);
    }
    return *this;
}

int Squad::push(ISpaceMarine* inst)
{
    ISpaceMarine*   tmp[this->_size + 1];
    if (!inst)
    {
        std::cout<<"the unit is null"<<std::endl;
        return (this->_size);
    }
    for (size_t i = 0; i < this->_size; ++i)
    {
        if (this->_arr[i] == inst)
            return (this->_size);
        tmp[i] = this->_arr[i];
    }
    tmp[this->_size] = inst;
    if (this->_arr)
    {
        delete [] this->_arr;
        this->_arr = nullptr;
    }
    this->_arr = new ISpaceMarine*[++this->_size];
    for (size_t i = 0; i < this->_size; ++i)
    {
        this->_arr[i] = tmp[i];
    }
    return this->_size;
}

int     Squad::getCount(void) const
{
    return _size;
}

ISpaceMarine*   Squad::getUnit(int index) const
{
    ISpaceMarine*   ans = nullptr;
    if (index >= (int)_size)   
        return ans;
    for (size_t i = 0; i < _size; ++i)
    {
        if ((int)i == index)
            ans = _arr[i];
    }
    return ans; 
}