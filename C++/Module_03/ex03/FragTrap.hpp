/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 19:24:36 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/07 18:34:19 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
class FragTrap: public ClapTrap{
    public:
        FragTrap(void);
        FragTrap(std::string const &);
        ~FragTrap(void);
        FragTrap(FragTrap const &);
        FragTrap&   operator=(FragTrap const &);
        void        rangedAttack(std::string const &) const;
        void        meleeAttack(std::string const &) const;
        void        vaulthunter_dot_exe(std::string const &);
};
#endif