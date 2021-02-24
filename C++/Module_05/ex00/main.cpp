/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:30:05 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/24 12:23:22 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *ob = nullptr;
    try
    {
        ob = new Bureaucrat("mamoussa", 150);
        std::cout<<*ob;
        ob->incrementGrade();
        ob->decrementGrade();
        std::cout<<ob->getGrade()<<std::endl;
    }
    catch(std::exception const& e)
    {
        std::cerr << e.what() <<std::endl;
    }
    if (ob)
        delete ob;
    return 0;
}