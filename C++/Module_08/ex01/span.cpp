/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 12:35:39 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/07 09:39:50 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int const& n):_N(n){}

Span::Span(Span const& inst)
{
    *this = inst;
}

Span::~Span(void){}

Span&   Span::operator=(Span const& inst)
{
    this->_N = inst._N;
    this->_v = inst._v;
    return *this;
}

void    Span::addNumber(int n)
{
    if (!this->_N)
        throw std::exception();
    this->_v.push_back(n);
    this->_N--;
}

void    Span::addNumber(std::vector<int>::iterator begin,
                        std::vector<int>::iterator end)
{
    if (!this->_N)
        throw std::exception();
    for (std::vector<int>::iterator it = begin; it != end; it++)
    {
        if (!this->_N)
            throw std::exception();
        this->_v.push_back(*it);
        this->_N--;
    }
}

long long Span::longestSpan(void) const
{
    if (this->_v.empty() || this->_v.size() == 1)
        throw std::exception();

    long long ans;
    std::vector<int> tmp;

    tmp = this->_v;
    std::sort(tmp.begin(), tmp.end());
    ans = static_cast<long long>(tmp[tmp.size() - 1]) - 
    static_cast<long long>(tmp[0]);
    return (ans);
}

int Span::shortestSpan(void) const
{
    if (this->_v.empty() || this->_v.size() == 1)
        throw std::exception();

    long long ans = INT_MAX;
    std::vector<int> tmp;

    tmp = this->_v;
    std::sort(tmp.begin(), tmp.end());
    for (size_t i = 1; i < tmp.size(); i++)
        ans = std::min(ans, static_cast<long long>(tmp[i]) - 
        static_cast<long long>(tmp[i-1]));
    return ans;
}