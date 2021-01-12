/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 12:23:41 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/08 12:52:32 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main(void)
{
    Pony *ptr = new Pony(40, 153, "Black", "heap");
    Pony inst = Pony(45, 160, "Red", "stack");
    Pony& ref = inst;
    ponyOnTheHeap(ptr);
    delete(ptr);
    ponyOnTheStack(ref);
    return 0;
}