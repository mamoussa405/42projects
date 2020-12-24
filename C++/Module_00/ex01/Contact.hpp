/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 14:19:59 by mamoussa          #+#    #+#             */
/*   Updated: 2020/12/23 12:45:08 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_H
# define _CONTACT_H
#include <string>
class Contact
{
    private:
        std::string _firstname;
        std::string _lastName;
        std::string _nickName;
        std::string _login;
        std::string _postalAddress;
        std::string _emailAddress;
        std::string _phoneNumber;
        std::string _birthdayDate;
        std::string _favoriteMeal;
        std::string _underwearColor;
        std::string _darkestSecret;
    public:
        Contact(){};
        void    add_contact(void);
        void    display_first_info(void) const;
        void    display_all_info(void) const;
};
#endif