/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:50:02 by mamoussa          #+#    #+#             */
/*   Updated: 2020/12/25 10:11:36 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "crapy.hpp"
#include <unistd.h>

void    Contact::display_first_info(void) const
{
    std::string firstname_sub;
    std::string lastname_sub;
    std::string nickname_sub;

    firstname_sub = this->_firstname;
    lastname_sub = this->_lastName;
    nickname_sub = this->_nickName;
    if (firstname_sub.length() > 10)
    {
        firstname_sub = firstname_sub.substr(0,9);
        firstname_sub += '.';
    }
    if (lastname_sub.length() > 10)
    {
        lastname_sub = lastname_sub.substr(0,9);
        lastname_sub += '.';
    }
    if (nickname_sub.length() > 10) 
    {
        nickname_sub = nickname_sub.substr(0, 9);
        nickname_sub += '.';
    }
    std::cout<<std::setw(10)<<std::right<<firstname_sub<<"|"<<std::setw(10)<<std::right
    <<lastname_sub<<"|"<<std::setw(10)<<std::right<<nickname_sub<<std::endl;
}

void    Contact::display_all_info(void) const
{
    std::cout<<WHITE<<"Your first name is: "<<BOLDBLUE<< this->_firstname<<std::endl;
    std::cout<<WHITE<<"Your last name is: " <<BOLDBLUE<< this->_lastName<<std::endl;
    std::cout<<WHITE<<"Your nickname is: "<<BOLDBLUE<< this->_nickName<<std::endl;
    std::cout<<WHITE<<"Your login is: " <<BOLDBLUE<< this->_login<<std::endl;
    std::cout<<WHITE<<"Your postal address is: " <<BOLDBLUE<< this->_postalAddress<<std::endl;
    std::cout<<WHITE<<"Your email address is: " <<BOLDBLUE<< this->_emailAddress<<std::endl;
    std::cout<<WHITE<<"Your phone number is: " <<BOLDBLUE<< this->_phoneNumber<<std::endl;
    std::cout<<WHITE<<"Your birthday date is: " <<BOLDBLUE<< this->_birthdayDate<<std::endl;
    std::cout<<WHITE<<"Your favorite meal is: " <<BOLDBLUE<< this->_favoriteMeal<<std::endl;
    std::cout<<WHITE<<"Your underwear color is: " <<BOLDBLUE<< this->_underwearColor<<std::endl;
    std::cout<<WHITE<<"Your darkest secret is: " <<BOLDBLUE<< this->_darkestSecret<<std::endl;
     
}

void    Contact::add_contact(void)
{
    std::cout<<"Your first name: ";
    std::getline(std::cin, this->_firstname);
    std::cout<<"Your last name: ";
    std::getline(std::cin, this->_lastName);
    std::cout<<"Your nickname: ";
    std::getline(std::cin, this->_nickName);
    std::cout<<"Your login: ";
    std::getline(std::cin, this->_login);
    std::cout<<"Your postal address: ";
    std::getline(std::cin, this->_postalAddress);
    std::cout<<"Your email address: ";
    std::getline(std::cin, this->_emailAddress);
    std::cout<<"Your phone number: ";
    std::getline(std::cin, this->_phoneNumber);
    std::cout<<"Your birthday date: ";
    std::getline(std::cin, this->_birthdayDate);
    std::cout<<"Your favorite meal: ";
    std::getline(std::cin, this->_favoriteMeal);
    std::cout<<"Your underwear color: ";
    std::getline(std::cin, this->_underwearColor);
    std::cout<<"Your darkest secret: ";
    std::getline(std::cin, this->_darkestSecret);
    std::cout<<"Your contact has been added 👌"<<std::endl;
}