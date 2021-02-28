/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 17:18:42 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/28 09:59:51 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target):
Form(target, 25, 5){}

PresidentialPardonForm::~PresidentialPardonForm(void){}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (Form::getInd() && (executor.getGrade() <= Form::getExecGrade())) 
    {
        std::cout<< Form::getName()  << " has been pardoned by Zafod Beeblebrox"<<
        std::endl;
    }
    else
        throw Form::GradeTooHighException();
}