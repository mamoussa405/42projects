/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:05:09 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/16 12:22:07 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD__HPP
# define SQUAD__HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad: public ISquad
{
    private:
        ISpaceMarine**   _arr;
        size_t          _size;
    public:
        Squad(void);
        Squad(Squad const &);
        ~Squad(void);
        Squad&  operator=(Squad const &);
        int             getCount() const;
        ISpaceMarine*   getUnit(int) const;
        int             push(ISpaceMarine*);
};
#endif