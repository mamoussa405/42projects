/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:46:50 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 14:50:39 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H
# define _ZOMBIE_H
# include <iostream>
class Zombie{
    private:
        std::string const _type;
        std::string const _name;
    public:
        Zombie(std::string const, std::string const);
        ~Zombie();
        void announce(void) const;
};
#endif