/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:29:08 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/09 10:46:13 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int main(void)
{
    //FragTrap tests
    FragTrap fragInst("mamoussa");
    fragInst.rangedAttack("Konoha");
    fragInst.meleeAttack("pain");
    fragInst.takeDamage(200);
    std::cout<<"HP: "<<fragInst.getHitPoints()<<"\nEP: "<<fragInst.getEnergyPoints()<<std::endl;
    fragInst.beRepaired(15);
    std::cout<<"HP: "<<fragInst.getHitPoints()<<"\nEP: "<<fragInst.getEnergyPoints()<<std::endl;
    fragInst.vaulthunter_dot_exe("Akatsuki");
    std::cout<<"HP: "<<fragInst.getHitPoints()<<"\nEP: "<<fragInst.getEnergyPoints()<<std::endl;
    fragInst.vaulthunter_dot_exe("Akatsuki");
    std::cout<<"HP: "<<fragInst.getHitPoints()<<"\nEP: "<<fragInst.getEnergyPoints()<<std::endl;
    //ScavTrap tests
    ScavTrap scavInst("mamoussa");
    scavInst.rangedAttack("Konoha");
    scavInst.meleeAttack("pain");
    scavInst.takeDamage(200);
    std::cout<<"HP: "<<scavInst.getHitPoints()<<"\nEP: "<<scavInst.getEnergyPoints()<<std::endl;
    scavInst.beRepaired(15);
    std::cout<<"HP: "<<scavInst.getHitPoints()<<"\nEP: "<<scavInst.getEnergyPoints()<<std::endl;
    scavInst.challengeNewcomer();
    scavInst.challengeNewcomer();
    //NinjaTrap tests
    NinjaTrap ninjaInst("mamoussa");
    ninjaInst.ninjaShoebox(fragInst);
    ninjaInst.ninjaShoebox(scavInst);
    ninjaInst.ninjaShoebox(ninjaInst);
    return 0;
}