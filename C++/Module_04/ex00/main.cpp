/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:17:28 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/12 17:13:09 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

int main() {

        Sorcerer robert("Robert", "the Magnificent");

        Victim jim("Jimmy");
        Peon joe("Joe");
        // Mamoussa  inst("mamoussa's name");

        std::cout << robert << jim << joe;
        // std::cout<< robert << jim << joe << inst;
        robert.polymorph(jim);
        robert.polymorph(joe);
        // robert.polymorph(inst);
        // robert.polymorph(inst);
        return 0; 
}