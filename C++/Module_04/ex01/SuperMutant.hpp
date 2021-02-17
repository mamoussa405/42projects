/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:30:09 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/15 15:15:28 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT__HPP
# define SUPERMUTANT__HPP
# include "Enemy.hpp" 

class   SuperMutant: public Enemy
{
    public:
        SuperMutant(void);
        ~SuperMutant(void);
        void    takeDamage(int);
};

#endif