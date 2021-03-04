/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:40:24 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/03 18:57:48 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Data * deserialize(void * raw)
{
    Data *str;
    char *arr;
    size_t i = 0;

    str = new Data;
    arr = reinterpret_cast<char*>(raw);
    for(; i < 8; ++i)
        str->s1 += arr[i];
    str->n = *(reinterpret_cast<int*>(arr + i));
    i += 4;
    for(; i < 20; ++i)
        str->s2 += arr[i];
    return str;
}