/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 19:24:36 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/08 10:44:33 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
class FragTrap{
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
        FragTrap(void);
        FragTrap(std::string const &);
        ~FragTrap(void);
        FragTrap(FragTrap const &);
        FragTrap&   operator=(FragTrap const &);
        void        rangedAttack(std::string const &) const;
        void        meleeAttack(std::string const &) const;
        int         getHitPoints(void) const;
        int         getEnergyPoints(void) const;
        void        takeDamage(unsigned int);
        void        beRepaired(unsigned int);
        void        vaulthunter_dot_exe(std::string const &);
};
#endif