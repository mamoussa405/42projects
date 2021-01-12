/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:34:22 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/09 17:14:01 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_H
# define _HUMANA_H
# include "Weapon.hpp"
class HumanA{
    private:
        Weapon& _inst;
        std::string const _name;
    public:
        HumanA(std::string const, Weapon&);
        ~HumanA(void);
        void    attack(void) const;
};
#endif