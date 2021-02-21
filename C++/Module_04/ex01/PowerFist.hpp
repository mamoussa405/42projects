/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:07:21 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/21 17:43:14 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST__HPP
# define POWERFIRST__HPP
# include "AWeapon.hpp"

class   PowerFist: public AWeapon{
    public:
        PowerFist(void);
        virtual ~PowerFist(void);
        void    attack(void) const;
};
#endif