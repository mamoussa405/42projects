/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 12:36:38 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/04 12:53:26 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
template<class T>
void    swap(T &a, T &b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template<class T>
T min(T a, T b)
{
    if (a < b)
        return a;
    else if (a > b)
        return b;
    return b;
}

template<class T>
T max(T a, T b)
{
    if (a > b)
        return a;
    else if ( a < b)
        return b;
    return b;
}