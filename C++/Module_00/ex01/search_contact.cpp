/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:06:34 by mamoussa          #+#    #+#             */
/*   Updated: 2020/12/25 10:11:19 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "crapy.hpp"

void    search_contact(Contact contacts[], unsigned int contact_size)
{
    unsigned int     index;
    std::string      ignore;

    index = 0;
    while (index < contact_size)
    {
        std::cout<<BOLDBLUE<<std::setw(10)<<std::right<<index<<"|";
        contacts[index].display_first_info();
        index++;
    }
    while (true)
    {
        std::cout<<WHITE<<"Display index: ";
        std::cin>>index;
        std::cin.ignore(1);
        if (index >= contact_size) 
        {
            std::cout<<BOLDRED<<"No such contact 😅"<<std::endl;
            continue;
        }
        else
            break;
    }
    contacts[index].display_all_info();
}