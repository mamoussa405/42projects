/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:04:57 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/28 10:45:20 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM__HPP
# define ROBOTOMYREQUESTFORM__HPP 
# include "Form.hpp"

class RobotomyRequestForm: public Form{
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string const);
        virtual ~RobotomyRequestForm(void);
        void execute(Bureaucrat const &) const;
};
#endif