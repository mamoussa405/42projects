/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:24:05 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/20 16:29:56 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA__HPP
# define AMATERIA__HPP
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
    private:
        AMateria(void);
    protected:
        std::string _type;
        unsigned int _xp;
    public:
         AMateria(std::string const &);
         AMateria(AMateria const &);
         AMateria&  operator=(AMateria const &);
         virtual    ~AMateria(void);
        
         std::string const & getType(void) const;
         unsigned int getXP(void) const;

         virtual    AMateria*   clone(void) const = 0;
         virtual    void use(ICharacter&) = 0;
};

#endif