/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:07:40 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/12 12:30:03 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM__HPP
# define  VICTIM__HPP
# include <iostream>

class   Victim{
    protected:
        std::string _Name;
    public:
        Victim(void);
        Victim(std::string const);
        Victim(Victim const &);
        ~Victim(void);
        Victim& operator=(Victim const &);
        std::string getName(void) const;
        virtual void getPolymorphed(void) const;
};
std::ostream&   operator<<(std::ostream &, Victim const &);
#endif