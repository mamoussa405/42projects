/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:08:41 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/09 18:56:53 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){};
Brain::~Brain(){};

const std::string  Brain::identify(void) const
{
    std::stringstream s;
    s<<this;
    return s.str();
}