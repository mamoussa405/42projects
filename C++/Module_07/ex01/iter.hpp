/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:10:46 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/04 14:24:10 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
template<class T>
void    iter(T *arr, size_t s, void(func_ptr)(T))
{
    for (size_t i = 0; i < s; ++i)
        func_ptr(arr[i]);
    std::cout << std::endl;
}

template<class T>

void    print(T a)
{
    std::cout << a << " ";
}