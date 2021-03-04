/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:17:26 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/04 14:25:34 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int int_arr[10] = {10, 20, 8, 30, 52, 63, 69, 52 ,10 , 14};
    char char_arr[10] = {'h','e', 'l', 'l', 'o', 'w', 'o', 'r','l', 'd'};
    std::string str_arr[3] = {"mamoussa", "string", "1337"};

    iter(int_arr, 10, print);
    iter(char_arr, 10, print);
    iter(str_arr, 3, print);
    return 0;
}