/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:11:05 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/09 18:57:17 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main(void)
{
    Human bob;

    std::cout<<bob.identify()<<std::endl;
    std::cout<<bob.getBrain().identify()<<std::endl;
    return 0;
}