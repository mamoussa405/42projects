/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 17:18:56 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/28 10:45:27 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM__HPP
# define SHRUBBERYCREATIONFORM__HPP
#include "Form.hpp"

class ShrubberyCreationForm: public Form{
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string const);
        virtual ~ShrubberyCreationForm(void);
        void     execute(Bureaucrat const &) const;
};
#endif