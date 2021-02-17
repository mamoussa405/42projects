/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:22:46 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/17 12:24:53 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ASSAULTTERMINATOR__HPP
# define ASSAULTTERMINATOR__HPP 
# include "ISpaceMarine.hpp"

class  AssaultTerminator: public ISpaceMarine
{
    public:
        AssaultTerminator(void);
        ~AssaultTerminator(void);
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif