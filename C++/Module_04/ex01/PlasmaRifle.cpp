/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:52:50 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/15 11:45:31 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21){};

PlasmaRifle::~PlasmaRifle(void){};

void    PlasmaRifle::attack(void) const{
    std::cout<<"* piouuu piouuu piouuu *"<<std::endl;
}