/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:18:40 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 16:23:35 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEHORDE_H
# define _ZOMBIEHORDE_H
# include "Zombie.hpp"
class ZombieHorde{
    private:
        unsigned int _N;
        Zombie *_zombies;
    public:
        ZombieHorde(unsigned int);
        ~ZombieHorde();
        void    announce(void) const;
};
#endif