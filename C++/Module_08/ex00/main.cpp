/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:46:58 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/06 11:03:44 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
    std::vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    std::cout << easyfind(v, 0) << std::endl;
    return 0;
}