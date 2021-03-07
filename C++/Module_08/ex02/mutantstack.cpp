/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 10:02:43 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/07 10:40:42 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void){}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const& inst)
{
    *this = inst;
}

template<typename T>
MutantStack<T>::~MutantStack(void){}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack const& inst)
{
    this->_v = inst._v;
    return *this;
}

template<typename T>
void MutantStack<T>::push(T n)
{
    this->_v.push_back(n);
}

template<typename T>
void MutantStack<T>::pop(void)
{
    this->_v.pop_back(n);
}

template<typename T>
T MutantStack<T>::top(void)
{
    this->_v.back();
}

template<typename T>
size_t MutantStack<T>::size(void) const
{
    return this->_v.size();
}

template<typename T>
typename std::vector<T>::iterator& MutantStack<T>::begin(void) const
{
    this->_v.begin();
}

template<typename T>
typename std::vector<T>::iterator& MutantStack<T>::end(void) const
{
    this->_v.end();
}