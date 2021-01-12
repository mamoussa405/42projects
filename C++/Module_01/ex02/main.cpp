/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:54:51 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 15:57:39 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void){
    ZombieEvent inst = ZombieEvent();
    ZombieEvent& ref = inst;

    inst.setZombieType("night");
    randomChump(ref);
    inst.setZombieType("day");
    randomChump(ref);
    return 0;
}