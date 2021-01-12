/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:24:21 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/09 16:58:29 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H
# define _WEAPON_H
# include <iostream>
class Weapon{
    private:
        std::string _type;
    public:
        Weapon(std::string const);
        ~Weapon();
        const std::string& getType(void) const;
        void    setType(std::string);
};
#endif