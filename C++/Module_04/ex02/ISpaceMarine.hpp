/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 10:58:58 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/17 11:55:28 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE__HPP
# define ISPACEMARINE__HPP
# include <iostream>
class ISpaceMarine
{
    public:
       virtual ~ISpaceMarine() {}
       virtual ISpaceMarine* clone() const = 0;
       virtual void battleCry() const = 0;
       virtual void rangedAttack() const = 0;
       virtual void meleeAttack() const = 0;
};
#endif