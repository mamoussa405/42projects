/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 10:54:04 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/16 15:05:22 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD__HPP
# define ISQUAD__HPP
# include <iostream>
# include "ISpaceMarine.hpp"
class ISquad
{
    public:
        virtual ~ISquad() {}
        virtual int getCount() const = 0;
        virtual ISpaceMarine* getUnit(int) const = 0;
        virtual int push(ISpaceMarine*) = 0;
};
#endif