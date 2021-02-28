/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:41:59 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/28 10:45:30 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM__HPP
# define PRESIDENTIALPARDONFORM__HPP
# include "Form.hpp"
class PresidentialPardonForm: public Form{
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string const);
        virtual ~PresidentialPardonForm(void);
        void execute(Bureaucrat const &) const;
};
#endif