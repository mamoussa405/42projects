/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:48:33 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/03 15:31:29 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Types.hpp"

Types::Types(void){}

Types::Types(Types const & inst)
{
    *this = inst;
}

Types&  Types::operator=(Types const& inst)
{
    this->_char_v = inst._char_v;
    this->_int_v = inst._int_v;
    this->_float_v = inst._float_v;
    this->_double_v = inst._double_v;
    return *this;
}

Types::~Types(void){}

char    Types::getChar(void) const
{
    return this->_char_v;
}

long long     Types::getInt(void) const
{
    return this->_int_v;
}

long double   Types::getFloat(void) const
{
    return this->_float_v;
}

long double Types::getDouble(void) const
{
    return this->_double_v;
}

void Types::setChar(char value)
{
    this->_char_v = value;
}

void Types::setInt(long long value)
{
    this->_int_v = value;
}

void Types::setFloat(long double value)
{
    this->_float_v = value;
}

void Types::setDouble(long double value)
{
    this->_double_v = value;
}