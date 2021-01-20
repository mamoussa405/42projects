/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 11:57:31 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/13 10:39:52 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(){};

Pony::Pony(unsigned int weight, unsigned int heigth, std::string const color, 
std::string const type): _weight(weight), _heigth(heigth), _color(color), _type(type){};

void Pony::getProperties(void) const
{
    std::cout<<"Your Pony's weight: "<<this->_weight<<" kg"<<std::endl<<"Your Pony's heigth: "<<this->_heigth<<
    " cm"<<std::endl<<"Your Pony's color: "<<this->_color<<std::endl;
}

Pony::~Pony(){
    std::cout<<"Say bey to your Pony in the "<<_type<<" 😔"<<std::endl;
}

void    ponyOnTheHeap(void)
{
    Pony *ptr = new Pony(40, 153, "Black", "heap");

    std::cout<<"Hello from the heap, those are your pony's properties:"<<std::endl;
    ptr->getProperties();
    delete(ptr);
}

void    ponyOnTheStack(void)
{
    Pony inst(42, 160, "Red", "Stack");

    std::cout<<"Hello from the stack, those are your pony's properties:"<<std::endl;
    inst.getProperties();
}