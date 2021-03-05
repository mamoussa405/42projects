/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:25:39 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/05 10:00:35 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Array.hpp"
template<class T>
Array<T>::Array(void):_arr(nullptr), s(0){}

template<class T>
Array<T>::Array(unsigned int n)
{
    _arr = new T[n]();
    s = n;
}

template<class T>
Array<T>::Array(Array<T> const& inst)
{
    *this = inst;
}

template<class T>
Array<T>& Array<T>::operator=(Array<T> const& inst)
{
    if (this->_arr)
    {
        delete [] this->_arr;
        this->_arr = nullptr;
    }
    this->_arr = new T[inst.s]();
    for (size_t i = 0; i < inst.s; ++i)
        this->_arr[i] = inst._arr[i];
    return *this; 
}

template<class T>
T& Array<T>::operator[](size_t ind)
{
    if (ind >= this->s)
        throw std::exception();
    return this->_arr[ind];
}

template<class T>
Array<T>::~Array(void)
{
    if (this->_arr)
    {
        delete [] this->_arr;
        this->_arr = nullptr;
    }
}

template<class T>
size_t Array<T>::size(void) const
{
    return this->s;
}