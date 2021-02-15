/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:15:07 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/13 16:20:52 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY__HPP
# define ENEMY__HPP
# include <iostream>

class Enemy
{
    private:
        Enemy(void);
    protected:
        std::string     _Type;
        int             _HP; 
    public:
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const &);
        virtual ~Enemy(void);
        Enemy&          operator=(Enemy const &);
        std::string     getType(void) const;
        int             getHP(void) const;
        virtual void    takeDamage(int);
};

#endif
