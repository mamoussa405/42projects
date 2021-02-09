/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 10:49:16 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/09 11:07:44 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap{
    public:
        NinjaTrap(void);
        NinjaTrap(std::string const );
        ~NinjaTrap(void);
        NinjaTrap(NinjaTrap const &);
        NinjaTrap& operator=(NinjaTrap const &);
        void        rangedAttack(std::string const &) const;
        void        meleeAttack(std::string const &) const;
        void        ninjaShoebox(FragTrap &) const;
        void        ninjaShoebox(ScavTrap &) const;
        void        ninjaShoebox(NinjaTrap &) const;
};
#endif