/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:07:01 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/20 11:05:26 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void):_fp_value(0){
    std::cout<<"Default constructor called"<<std::endl;
};

Fixed::Fixed(Fixed& inst){
    std::cout<<"Copy constructor called"<<std::endl;
    *this = inst;
}

Fixed::~Fixed(void){
    std::cout<<"Destructor called"<<std::endl;
}

Fixed&      Fixed::operator=(Fixed& inst){
    std::cout<<"Assignation operator called"<<std::endl;
    this->_fp_value = inst.getRawBits();
    return *this;
}

int         Fixed::getRawBits(void) const{
    std::cout<<"getRawBits member function called"<<std::endl;
    return this->_fp_value;
}

void        Fixed::setRawBits(int const raw){
    this->_fp_value = raw;
}
