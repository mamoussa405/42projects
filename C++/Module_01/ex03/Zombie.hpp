/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:46:50 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 16:49:55 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H
# define _ZOMBIE_H
# include <iostream>
class Zombie{
    private:
        std::string _type;
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void    announce(void) const;
        void    setNameAndType(std::string, std::string);
};
#endif