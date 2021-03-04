/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:34:46 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/04 10:29:33 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void)
{
    void *arr = serialize();
    Data *str = deserialize(arr);

    std::cout << str->s1 << std::endl;
    std::cout << str->n << std::endl;
    std::cout << str->s2 << std::endl;

    delete reinterpret_cast<char*>(arr);
    delete str;
    return 0;
}