/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:56:25 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/07 18:34:44 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
class ScavTrap: public ClapTrap{
    public:
        ScavTrap(void);
        ScavTrap(std::string const &);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const &);
        ScavTrap&   operator=(ScavTrap const &);
        void        rangedAttack(std::string const &) const;
        void        meleeAttack(std::string const &) const;
        void        challengeNewcomer(void) const;
};
#endif