/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify_from_reference.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:20:19 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/04 11:22:23 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_reference( Base & p)
{
    if (A* ptr = dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    else if (B* ptr = dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    else if (C* ptr = dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;
}