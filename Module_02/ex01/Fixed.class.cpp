/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:07:01 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/20 16:14:31 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void):_fp_value(0){
    std::cout<<"Default constructor called"<<std::endl;
};

Fixed::Fixed(const Fixed& inst){
    std::cout<<"Copy constructor called"<<std::endl;
    *this = inst;
}

Fixed::~Fixed(void){
    std::cout<<"Destructor called"<<std::endl;
}

Fixed::Fixed(const int value){
    std::cout<<"Int constructor called"<<std::endl;
    this->_fp_value = value << this->_fb_number;
}

Fixed::Fixed(const float value){
    std::cout<<"Float constructor called"<<std::endl;
    this->_fp_value = roundf(value * (float)(1 << this->_fb_number));
}

float   Fixed::toFloat(void) const
{
    return ((float)this->_fp_value / 256.0);
}

int     Fixed::toInt(void) const
{
    return (this->_fp_value / (1 << this->_fb_number));
}

Fixed&      Fixed::operator=(const Fixed& inst){
    std::cout<<"Assignation operator called"<<std::endl;
    this->_fp_value = inst._fp_value;
    return *this;
}

std::ostream&   operator<<(std::ostream& out, const Fixed& inst)
{
    out<<inst.toFloat();
    return out;
}