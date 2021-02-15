/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:39:28 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/13 16:16:38 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON__HPP
# define AWEAPON__HPP
# include <iostream>

class   AWeapon{
    private:
        AWeapon(void);
    protected:
        std::string _Name;
        int         _ApCost;
        int         _Damage;
    public:
        AWeapon(std::string const & name, int apcost, int damage);
        virtual ~AWeapon(void);
        AWeapon(AWeapon const &);
        AWeapon&        operator=(AWeapon const &);
        std::string     getName(void) const;
        int             getAPCost(void) const;
        int             getDamage(void) const;
        virtual void    attack(void) const = 0;
};

#endif