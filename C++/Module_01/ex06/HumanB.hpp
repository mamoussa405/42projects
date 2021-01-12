/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:10:24 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/09 17:22:20 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_H
# define _HUMANB_H
# include "Weapon.hpp"
class  HumanB{
    private:
        Weapon*           _inst;
        std::string const _name;
    public:
        HumanB(std::string const);
        ~HumanB();
        void    setWeapon(Weapon&);
        void    attack(void) const;
};
#endif