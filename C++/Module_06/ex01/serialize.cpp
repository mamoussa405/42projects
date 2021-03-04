/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:14:21 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/04 10:27:45 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void * serialize(void)
{
    std::string s = "hc2sh34jfsj42hc32hdf3";
    int integers[4] = {1,12,4,23};
    char*  arr;
    size_t i = 0;

    srand(time(NULL));
    arr = new char[21];
    for (; i < 8; ++i)
        arr[i] = s[rand() % s.size()];
    *(reinterpret_cast<int*>(arr + i))  = integers[rand() % 4];
    i += 4;
    for(; i < 20; ++i)
        arr[i] = s[rand() % s.size()];
    return reinterpret_cast<void*>(arr);
}