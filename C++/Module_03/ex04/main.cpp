/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:29:08 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/10 15:05:15 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main(void)
{
    SuperTrap inst("mamoussa");
    // FragTrap tests
    FragTrap fraginst("mamoussa");
    fraginst.rangedAttack("konoha");
    fraginst.meleeAttack("pain");
    fraginst.takeDamage(200);
    std::cout<<"hp: "<<fraginst.getHitPoints()<<"\nep: "<<fraginst.getEnergyPoints()<<std::endl;
    fraginst.beRepaired(15);
    std::cout<<"hp: "<<fraginst.getHitPoints()<<"\nep: "<<fraginst.getEnergyPoints()<<std::endl;
    fraginst.vaulthunter_dot_exe("akatsuki");
    std::cout<<"hp: "<<fraginst.getHitPoints()<<"\nep: "<<fraginst.getEnergyPoints()<<std::endl;
    fraginst.vaulthunter_dot_exe("akatsuki");
    std::cout<<"hp: "<<fraginst.getHitPoints()<<"\nep: "<<fraginst.getEnergyPoints()<<std::endl;
    // ScavTrap tests
    ScavTrap scavinst("mamoussa");
    scavinst.rangedAttack("konoha");
    scavinst.meleeAttack("pain");
    scavinst.takeDamage(200);
    std::cout<<"hp: "<<scavinst.getHitPoints()<<"\nep: "<<scavinst.getEnergyPoints()<<std::endl;
    scavinst.beRepaired(15);
    std::cout<<"hp: "<<scavinst.getHitPoints()<<"\nep: "<<scavinst.getEnergyPoints()<<std::endl;
    scavinst.challengeNewcomer();
    scavinst.challengeNewcomer();
    //NinjaTrap tests
    NinjaTrap ninjainst("mamoussa");
    ninjainst.ninjaShoebox(fraginst);
    ninjainst.ninjaShoebox(scavinst);
    ninjainst.ninjaShoebox(ninjainst);
    // SuperTrap tests
    std::cout<<"------------------"<<std::endl;
    SuperTrap superInst("mamoussa");
    superInst.rangedAttack("Konoha");
    superInst.meleeAttack("Konoha");
    superInst.vaulthunter_dot_exe("hello");
    return 0;
}