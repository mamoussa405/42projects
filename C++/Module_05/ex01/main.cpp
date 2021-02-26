/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:30:05 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/26 16:53:08 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat *br = nullptr;
    Form        *fr =  nullptr;
    try
    {
        br = new Bureaucrat("mamoussa", 30);
        fr = new Form("contract", 30, 150);
        std::cout<<*fr;
        fr->beSigned(*br);
        std::cout<<*fr;
    }
    catch(std::exception const& e)
    {
        std::cerr << e.what() <<std::endl;
    }
    if (br)
        delete br;
    if (fr)
        delete fr;
    return 0;
}