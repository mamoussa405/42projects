/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:48:07 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/21 17:43:07 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE__HPP
# define PLASMARIFLE__HPP
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon{
    public:
        PlasmaRifle(void);
        virtual ~PlasmaRifle(void);
        void    attack(void) const;
};
#endif