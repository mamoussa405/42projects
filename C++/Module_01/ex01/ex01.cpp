/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:22:07 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 14:25:53 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak(){
    std::string*    panther = new std::string("String panther");

    std::cout<<*panther << std::endl;
    delete (panther);
}