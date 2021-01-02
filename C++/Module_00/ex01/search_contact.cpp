/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:06:34 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/01 15:46:50 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "crapy.hpp"

bool is_str(std::string s)
{
    for(unsigned int i = 0; i < s.length(); ++i)
    {
        if (isalpha(s[i]))
            return 1;
    }
    return 0;
}

void    search_contact(Contact contacts[], unsigned int contact_size)
{
    unsigned int     index;
    std::string      ignore;
    std::string      str_ind;

    index = 0;
    if (contact_size == 0)
    {
        std::cout<<BOLDYELLOW<<"The contact is empty 😁"<<std::endl;
        return;
    }
    std::cout<<BOLDGREEN<<std::setw(10)<<std::right<<"Index"<<"|"<<
    std::setw(10)<<std::right<<"first name"<<"|"<<std::setw(10)<<
    std::right<<"last name"<<"|"<<std::setw(10)<<std::right<<
    "Nick Name"<<std::endl;
    while (index < contact_size)
    {
        std::cout<<BOLDBLUE<<std::setw(10)<<std::right<<index<<"|";
        contacts[index].display_first_info();
        index++;
    }
    if (contact_size > 0)
    {
        while (true)
        {
            std::cout<<WHITE<<"Display index: ";
            std::getline(std::cin, str_ind);
            if (is_str(str_ind))
            {
                std::cout<<BOLDRED<<"invalid input 😕"<<std::endl;
                continue;
            }
            else
            {
                index = stoi(str_ind);
                if (index >= contact_size) 
                {
                    std::cout<<BOLDRED<<"No such contact 😅"<<std::endl;
                    continue;
                }
                else
                    break;
            }
        }
        contacts[index].display_all_info();
    }
}