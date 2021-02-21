/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:07:40 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/21 16:58:19 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM__HPP
# define  VICTIM__HPP
# include <iostream>

class   Victim{
    protected:
        std::string _Name;
        Victim(void);
    public:
        Victim(std::string const);
        Victim(Victim const &);
        virtual ~Victim(void);
        Victim& operator=(Victim const &);
        std::string getName(void) const;
        virtual void getPolymorphed(void) const;
};
std::ostream&   operator<<(std::ostream &, Victim const &);
#endif