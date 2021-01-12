/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:20:23 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/09 18:58:13 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(){};

Human::~Human(){};

const std::string  Human::identify(void) const
{
    return (this->_inst.identify());
}

const   Brain&  Human::getBrain(void) const
{
    const Brain& ref = this->_inst;
    return (ref);
}