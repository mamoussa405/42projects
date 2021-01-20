/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:34:57 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/12 14:45:46 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){};

Human::~Human(){};

void    Human::meleeAttack(std::string const & target)
{
    std::cout<<"the target "<<target<<" has been called "<<"from the actions"<<
    " melleAttack"<<std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout<<"the target "<<target<<" has been called "<<"from the actions"<<
    " rangedAttack"<<std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout<<"the target "<<target<<" has been called "<<"from the actions"<<
    " intimidatingShout"<<std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    void (Human::*arr []) (std::string const &) = {&Human::meleeAttack, 
    &Human::rangedAttack, &Human::intimidatingShout};
    std::string names[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
    size_t i;

    for( i = 0; i < 3; ++i)
    {
        if(action_name == names[i])
        {
            (this->*arr[i])(target);
            return ;
        }
    }
    std::cout<<action_name<<": Action not found"<<std::endl;
}