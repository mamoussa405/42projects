/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:45:35 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/15 14:23:59 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main(void)
{
    Character* me = new Character("me");

    std::cout << *me;

    Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);

    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    //additional tests
    // std::cout<<"-------------"<<std::endl;
    // Enemy*  s = new SuperMutant();

    // me->equip(pf);
    // std::cout<<*me;
    // me->attack(s);
    // delete(me);
    // if (b->gethp() > 0)
    //     delete(b);
    // delete(pr);
    // delete(pf);
    // delete(s);
    return 0; 
}