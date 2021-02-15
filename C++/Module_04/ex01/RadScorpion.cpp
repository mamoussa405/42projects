/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:46:51 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/13 16:48:39 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion"){
    std::cout<<"* click click click *"<<std::endl;
}

RadScorpion::~RadScorpion(void){
    std::cout<<"* SPROTCH *"<<std::endl;
}