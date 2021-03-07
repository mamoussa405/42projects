/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 14:19:27 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/07 09:40:37 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    try
    {
        Span sp = Span(100000);
        std::vector<int> v;
        // sp.addNumber(5);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(18);
        // sp.addNumber(11);
        // sp.addNumber(2147483647);
        // sp.addNumber(-2147483648);
        // sp.addNumber(20);
        for (size_t i = 1; i <= 100000; i++)
            v.push_back(i);
        sp.addNumber(v.begin(), v.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}