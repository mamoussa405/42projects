/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:23:18 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/07 09:35:11 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

class Span{
    private:
        unsigned int        _N;
        std::vector<int>    _v;
        Span(void);
    public:
        Span(unsigned int const&);
        Span(Span const&);
        Span&   operator=(Span const&);
        ~Span(void);
        void        addNumber(int);
        void        addNumber(std::vector<int>::iterator,
                              std::vector<int>::iterator);
        int         shortestSpan(void) const;
        long long   longestSpan(void) const;
};