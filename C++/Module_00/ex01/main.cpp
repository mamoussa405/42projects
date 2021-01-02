/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:35:51 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/01 15:52:14 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "crapy.hpp"

int main(void)
{
    Contact contacts[8];
    std::string  input;
    unsigned int i;

    i = 0;
    std::cout<<std::setw(20)<<std::internal<<BOLDGREEN<<"Welcome to Crapy PhoneBook"<<std::endl;
    while (1)
    {
        std::cout<<WHITE<<"Please Enter a Command{ADD, SEARCH, EXIT}: ";
        std::getline(std::cin, input);
        if (input == "ADD") 
        {
            if (i > 7)
            {
                std::cout<<BOLDRED<<"The contact is full 😄\n";
                continue;
            }
            contacts[i].add_contact();
            i++;
        }
        else if (input == "SEARCH")
        {
            search_contact(contacts, i);
            continue;
        }
        else if (input == "EXIT")
            exit(0);
        else 
            std::cout<<"Please give a valid input 🙂\n";
    }
    return 0;
}