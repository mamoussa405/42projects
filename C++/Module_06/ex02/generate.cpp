/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:43:14 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/04 11:33:30 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){
    Base *arr[3] = {new A(), new B(), new C()};
    size_t i;

    srand(time(NULL)); 
    i = rand() % 3;
    for (size_t j = 0; j < 3; ++j)
    {
        if (j != i)
        {
            delete arr[j];
            arr[j] = nullptr;
        }
    }
    return dynamic_cast<Base*>(arr[i]);
}