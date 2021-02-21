/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:50:15 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/21 17:44:08 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CHARACTER__HPP
# define CHARACTER__HPP 
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class  Character{
    private:
        Character(void);
    protected:
        std::string _Name;
        int         _AP;
        AWeapon     *_ptr;
    public:
        Character(std::string const & name);
        Character(Character const &);
        ~Character(void);
        Character&  operator=(Character const &);
        void recoverAP(void);
        void equip(AWeapon*);
        void attack(Enemy*);
        std::string  const getName(void) const;
        int                getAP(void) const;
        AWeapon*           getWeapon(void) const;
};

std::ostream&   operator<<(std::ostream&, Character const &);
#endif