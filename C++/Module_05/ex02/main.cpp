/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:30:05 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/28 11:00:31 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    Form *fr = nullptr;
    Bureaucrat *br = nullptr;
    try{
        std::cout << "--------------- ShrubberyCreationFrom ------------" << std::endl;
        fr = new ShrubberyCreationForm("1337");
        br = new Bureaucrat("mamoussa", 100);
        std::cout << *fr;
        // br->executeForm(*fr);
        fr->beSigned(*br);
        std::cout << *fr;
        br->executeForm(*fr);
        delete fr;
        fr = nullptr;
        std::cout << "-------------- PresidentialPardonForm ------------" << std::endl;
        fr = new PresidentialPardonForm("President");
        std::cout << *fr;
        // br->executeForm(*fr);
        fr->beSigned(*br);
        std::cout << *fr;
        br->executeForm(*fr);
        delete fr;
        fr = nullptr;
        std::cout << "------------- RobotomyRequestForm --------------" << std::endl;
        fr = new RobotomyRequestForm("Alexa");
        std::cout << *fr;
        // br->executeForm(*fr);
        fr->beSigned(*br);
        std::cout << *fr;
        br->executeForm(*fr);
        br->executeForm(*fr);
        br->executeForm(*fr);
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
    return 0;
}