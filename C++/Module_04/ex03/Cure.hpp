/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:23:38 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/18 14:54:24 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE__HPP
# define CURE__HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure(void);
        ~Cure(void);
        AMateria*   clone(void) const;
        void        use(ICharacter&);
};

#endif