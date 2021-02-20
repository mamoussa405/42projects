/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:19:38 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/19 11:35:01 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CHARACTER__HPP
# define CHARACTER__HPP
# include "ICharacter.hpp"
# include "Cure.hpp"
# include <iostream>

class Character: public ICharacter
{
    private:
        Character(void);
        std::string _Name;
        AMateria*   _inv[4];
        size_t      _index;
    public:
        Character(std::string const &);
        Character(Character const &);
        Character&  operator=(Character const &);
        ~Character(void);
        std::string const & getName(void) const;
        void equip(AMateria*);
        void unequip(int);
        void use(int, ICharacter&);
};
#endif