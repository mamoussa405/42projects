/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:42:43 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/21 17:43:22 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPOIN__HPP
# define RADSCORPOIN__HPP
# include "Enemy.hpp"

class   RadScorpion: public Enemy
{
    public:
        RadScorpion(void);
        virtual ~RadScorpion(void);
};
#endif