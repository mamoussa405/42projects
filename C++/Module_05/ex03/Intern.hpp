/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:16:04 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/28 11:19:11 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN__HPP
# define INTERN__HPP
# include "Form.hpp"

class Intern
{
    public:
        Intern(void);
        Intern(Intern const &);
        ~Intern(void);
        Intern& operator=(Intern const &);
        Form*   makeForm(std::string const, std::string const);
};
#endif