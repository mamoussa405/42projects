/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 11:52:10 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 12:49:25 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_H
# define _PONY_H
# include <iostream>
class Pony{
    private:
        unsigned int            _weight;
        unsigned int            _heigth;
        std::string const       _color;
        std::string const       _type;
    public:
        Pony(unsigned int, unsigned int, std::string const, std::string const);
        ~Pony();
        void getProperties(void) const;
};
void ponyOnTheStack(Pony&);
void ponyOnTheHeap(Pony*);
#endif
