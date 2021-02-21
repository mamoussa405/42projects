/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:39:37 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/21 17:53:58 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE__HPP
# define ICE__HPP
# include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice(void);
        virtual ~Ice(void);
        AMateria*   clone(void) const;
        void        use(ICharacter&);
};

#endif