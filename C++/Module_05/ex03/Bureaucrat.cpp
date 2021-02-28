/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:55:16 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/28 10:38:28 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void){}

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& inst)
{
    *this = inst;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& inst)
{
    this->_grade = inst._grade; 
    return *this;
}

Bureaucrat::~Bureaucrat(void){}

std::string const& Bureaucrat::getName(void) const
{
    return this->_name;
}

size_t             Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

void                Bureaucrat::incrementGrade(void)
{
    if (--this->_grade < 1) 
        throw Bureaucrat::GradeTooHighException();
}

void                Bureaucrat::decrementGrade(void)
{
    if (++this->_grade > 150) 
        throw Bureaucrat::GradeTooLowException();
}

void               Bureaucrat::signForm(size_t ind, std::string const & name) const
{
    if (ind)
        std::cout << this->_name << " signs " << name << std::endl;
    else
        std::cout << this->_name << " cannot sign " << name << " because ";
}

void            Bureaucrat::executeForm(Form const & form)
{
    form.execute(*this);
    if (form.getInd() && (this->_grade <= form.getExecGrade()))
        std::cout << this->_name << " executes " << form.getName() << std::endl;
}

const char*    Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return "the bureaucrat grade is too high";
}

const char*    Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return "the bureaucrat grade is too low";
}

std::ostream&   operator<<(std::ostream & out, Bureaucrat const& inst)
{
    out << "<" << inst.getName() << ">" << ", bureaucrat grade " << "<" << inst.getGrade() << ">" << std::endl;
    return out;
}