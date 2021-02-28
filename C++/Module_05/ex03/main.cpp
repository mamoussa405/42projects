/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:30:05 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/28 11:56:10 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Form *fr = nullptr;
    Bureaucrat *br = nullptr;
    Intern *inter = nullptr; 
    try{
        std::cout << "--------------- ShrubberyCreationFrom ------------" << std::endl;
        inter = new Intern();
        fr =  inter->makeForm("shrubbery creation", "home");
        br = new Bureaucrat("mamoussa", 5);
        if (fr)
        {
            std::cout << *fr;
            // br->executeForm(*fr);
            fr->beSigned(*br);
            std::cout << *fr;
            br->executeForm(*fr);
            delete fr;
            fr = nullptr;
        }
        std::cout << "-------------- PresidentialPardonForm ------------" << std::endl;
        fr = inter->makeForm("presidential pardon", "President");
        if (fr)
        {
            std::cout << *fr;
            // br->executeForm(*fr);
            fr->beSigned(*br);
            std::cout << *fr;
            br->executeForm(*fr);
            delete fr;
            fr = nullptr;
        }
        std::cout << "------------- RobotomyRequestForm --------------" << std::endl;
        fr = inter->makeForm("robotomy request", "Bender");
        if (fr)
        {
            std::cout << *fr;
            // br->executeForm(*fr);
            fr->beSigned(*br);
            std::cout << *fr;
            br->executeForm(*fr);
            br->executeForm(*fr);
            br->executeForm(*fr);
            delete fr;
            fr = nullptr;
        }
    }
    catch(std::exception const & e)
    {
        std::cerr << e.what() << std::endl;
    }
    if (br)
    {
        delete br;
        br = nullptr;
    }
    if (fr)
    {
        delete fr;
        fr = nullptr;
    }
    if (inter)
    {
        delete inter;
        inter = nullptr;
    }
    return 0;
}