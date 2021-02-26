/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:44:25 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/26 16:32:18 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const & name, int signGrade, int execGrade):
_name(name), _is_signed(false),_sign_grade(signGrade), _execute_grade(execGrade){
    if (signGrade < 1 || execGrade < 1) 
        throw Form::GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const & inst)
:_name(""), _sign_grade(0), _execute_grade(0){
    *this = inst;
}

Form&   Form::operator=(Form const & inst)
{
    this->_is_signed = inst._is_signed;
    return *this;
}

Form::~Form(void){}

std::string const&  Form::getName(void) const
{
    return this->_name;
}

bool                Form::getInd(void) const
{
    return this->_is_signed;
}

size_t             Form::getSignGrade(void) const
{
    return this->_sign_grade;
}

size_t            Form::getExecGrade(void) const
{
    return this->_execute_grade;
}

void             Form::beSigned(Bureaucrat const & inst)
{
    if (inst.getGrade() <= this->_sign_grade)
    {
        this->_is_signed = true;
        inst.signForm(this->_is_signed, this->_name);
    }
    else
    {
        this->_is_signed = false;
        inst.signForm(this->_is_signed, this->_name);
        throw Form::GradeTooLowException();
    }
}

const char* Form::GradeTooHighException::what(void) const throw()
{
    return "The form grade is too high";
}

const char* Form::GradeTooLowException::what(void) const throw()
{
    return "The form grade is too low";
}

std::ostream&   operator<<(std::ostream& out, Form const & inst)
{
    out << "The form " << inst.getName() << " has " << inst.getSignGrade()
    << " grade required to sign it and " << inst.getExecGrade()
    << " grade required to execute it";
    if (!inst.getInd())
        out << " and it's not signed yet" << std::endl;
    else
        out << " and it's signed" << std::endl;
    return out;
}