/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:55:16 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/24 12:26:20 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

const char*    Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return "the grade is too high";
}

const char*    Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return "the grade is too low";
}

std::ostream&   operator<<(std::ostream & out, Bureaucrat const& inst)
{
    out << "<" << inst.getName() << ">" << ", bureaucrat grade " << "<" << inst.getGrade() << ">" << std::endl;
    return out;
}