/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 18:00:53 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/08 10:32:24 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
class   ClapTrap{
    protected:
        int                 _HitPoints;
        int                 _MaxHitPoints;
        int                 _EnergyPoints;
        int                 _MaxEnergyPoints;
        int                 _Level;
        std::string         _Name;
        int                 _MeleeAttackDamage;
        int                 _RangedAttackDamage;
        int                 _ArmorDamageReduction;
    public:
        ClapTrap();
        ClapTrap(int,int,int,int,int,std::string,int,int,int);
        ~ClapTrap();
        ClapTrap(ClapTrap const &);
        ClapTrap&   operator=(ClapTrap const &);
        int         getHitPoints(void) const;
        int         getEnergyPoints(void) const;
        void        takeDamage(unsigned int);
        void        beRepaired(unsigned int);
};
#endif