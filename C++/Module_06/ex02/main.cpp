/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:23:12 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/04 11:24:04 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
    Base *ptr = generate();
    identify_from_pointer(ptr);
    identify_from_reference(*ptr);
    return 0;
}