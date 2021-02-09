/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:17:39 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/09 12:11:16 by mamoussa         ###   ########.fr       */
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
};
#endif