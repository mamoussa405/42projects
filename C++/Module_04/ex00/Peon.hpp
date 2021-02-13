/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:06:49 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/12 16:55:57 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   PEON__HPP
# define PEON__HPP
# include "Victim.hpp"

class Peon : public Victim{
    public:
        Peon(void);
        Peon(std::string const);
        Peon(Peon const &);
        ~Peon(void);
        void    getPolymorphed(void) const;
};

class Mamoussa: public Victim{
    public:
        Mamoussa(void);
        Mamoussa(std::string const);
        Mamoussa(Mamoussa const &);
        ~Mamoussa(void);
        void    getPolymorphed(void) const;
};
#endif