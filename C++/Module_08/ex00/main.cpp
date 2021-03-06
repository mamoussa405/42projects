/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:46:58 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/06 11:17:08 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main(void)
{
    std::vector<int> v;
    std::list<int> l;

    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);

    l.push_back(4);
    l.push_back(5);
    l.push_back(4);
    l.push_back(-10);

    std::cout << easyfind(v, 0) << std::endl;
    std::cout << easyfind(l, -10) << std::endl;
    return 0;
}