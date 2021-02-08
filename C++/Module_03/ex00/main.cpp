/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:29:08 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/07 15:26:19 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap inst("mamoussa");
    inst.rangedAttack("Konoha");
    inst.meleeAttack("pain");
    inst.takeDamage(200);
    std::cout<<"HP: "<<inst.getHitPoints()<<"\nEP: "<<inst.getEnergyPoints()<<std::endl;
    inst.beRepaired(15);
    std::cout<<"HP: "<<inst.getHitPoints()<<"\nEP: "<<inst.getEnergyPoints()<<std::endl;
    inst.vaulthunter_dot_exe("Akatsuki");
    std::cout<<"HP: "<<inst.getHitPoints()<<"\nEP: "<<inst.getEnergyPoints()<<std::endl;
    inst.vaulthunter_dot_exe("Akatsuki");
    std::cout<<"HP: "<<inst.getHitPoints()<<"\nEP: "<<inst.getEnergyPoints()<<std::endl;
    return 0;
}