/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:56:25 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/08 10:43:22 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
class ScavTrap{
    private:
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
        ScavTrap(void);
        ScavTrap(std::string const &);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const &);
        ScavTrap&   operator=(ScavTrap const &);
        void        rangedAttack(std::string const &) const;
        void        meleeAttack(std::string const &) const;
        int         getHitPoints(void) const;
        int         getEnergyPoints(void) const;
        void        takeDamage(unsigned int);
        void        beRepaired(unsigned int);
        void        challengeNewcomer(void) const;
};
#endif