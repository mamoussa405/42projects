/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:57:06 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 15:56:37 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEEVENT_H
# define _ZOMBIEEVENT_H
# include <iostream>
# include "Zombie.hpp"
class ZombieEvent{
    private:
        std::string  _type;
    public:
        ZombieEvent();
        ~ZombieEvent();
       void    setZombieType(std::string const);
       Zombie* newZombie(std::string);
};
void    randomChump(ZombieEvent&);
#endif