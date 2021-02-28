/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:19:54 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/28 11:55:51 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void){}

Intern::Intern(Intern const& inst)
{
    *this = inst;
}

Intern::~Intern(void){}

Intern& Intern::operator=(Intern const& inst)
{
    (void)inst;
    return *this;
}

Form*   Intern::makeForm(std::string const name, std::string const target)
{
    std::string arr[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form*   forms[3] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target),
    new ShrubberyCreationForm(target)};
    for (size_t i = 0; i < 3; ++i)
    {
        if (arr[i] == name)
        {
            for (size_t j = 0; j < 3; ++j)
            {
                if (j != i)
                {
                    delete forms[j];
                    forms[j] = nullptr;
                }
            }
            std::cout << "Intern creates " << name << std::endl;
            return forms[i];
        }
    }
    for (size_t i = 0; i < 3; i++)
    {
        delete forms[i];
        forms[i] = nullptr;
    }
    std::cerr << "no such form" << std::endl;
    return nullptr;
}