/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:31:35 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/28 10:35:05 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target):
Form(target, 72, 45){};

RobotomyRequestForm::~RobotomyRequestForm(void){}

void    RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    static int time = 0;
    if (Form::getInd() && (executor.getGrade() <= Form::getExecGrade())) 
    {
        if ((time % 2))
        {
            std::cout<<"drrrrrrr.... "<< Form::getName() << " has been robotomized successfully"
            << std::endl;
        }
        else
            std::cout<<"it's a failure" << std::endl;
        time++;
    }
    else
        throw Form::GradeTooHighException();
}