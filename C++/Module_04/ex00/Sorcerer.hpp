/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:47:02 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/21 16:58:50 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER__HPP
# define SORCERER__HPP
# include <iostream>
# include "Victim.hpp"

class   Sorcerer{
    private:
        std::string _Name;
        std::string _Title;
        Sorcerer(void);
    public:
        Sorcerer(std::string const, std::string const);
        virtual ~Sorcerer(void);
        Sorcerer(Sorcerer const &);
        Sorcerer&   operator=(Sorcerer const &);
        std::string getName(void) const;
        std::string getTitle(void) const;
        void    polymorph(Victim const &) const;
};

std::ostream&   operator<<(std::ostream &, Sorcerer const &);
#endif