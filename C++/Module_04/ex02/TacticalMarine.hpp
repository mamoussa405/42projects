/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:49:27 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/21 15:53:26 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE__HPP
# define TACTICALMARINE__HPP
# include "ISpaceMarine.hpp"

class  TacticalMarine: public ISpaceMarine
{
    public:
        TacticalMarine(void);
        TacticalMarine(TacticalMarine const &);
        TacticalMarine&     operator=(TacticalMarine const &);
        ~TacticalMarine(void);
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};
#endif
