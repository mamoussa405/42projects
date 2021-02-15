/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:09:15 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/13 16:11:39 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 50, 8){};

PowerFist::~PowerFist(void){};

void    PowerFist::attack(void) const{
    std::cout<<"* pschhh... SBAM! *"<<std::endl;
}