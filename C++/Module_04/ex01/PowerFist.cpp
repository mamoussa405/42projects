/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:09:15 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/15 11:45:53 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50){};

PowerFist::~PowerFist(void){};

void    PowerFist::attack(void) const{
    std::cout<<"* pschhh... SBAM! *"<<std::endl;
}