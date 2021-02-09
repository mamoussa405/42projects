/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:17:39 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/09 17:57:48 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP__HPP
# define SUPERTRAP__HPP
# include"FragTrap.hpp"
# include"NinjaTrap.hpp"

class     SuperTrap : public FragTrap, public NinjaTrap{

    public:
        SuperTrap(void);
        ~SuperTrap(void);
        SuperTrap(SuperTrap const &);
        SuperTrap(std::string const);
        SuperTrap&  operator=(SuperTrap const &);
        void        rangedAttack(std::string const &);
        void        meleeAttack(std::string const &);
};
#endif