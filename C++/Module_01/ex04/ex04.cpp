/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:50:51 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 17:53:06 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string     s = "HI THIS IS BRAIN";
    std::string*    ptr = &s;
    std::string&    ref = s;

    std::cout<<*ptr<<std::endl;
    std::cout<<ref<<std::endl;
    return 0;
}