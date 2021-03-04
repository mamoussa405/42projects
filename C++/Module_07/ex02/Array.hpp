/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:21:43 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/04 18:58:19 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
template<class T>
class Array{
    private:
        T* _arr;
        size_t s;
    public:
        Array(void);
        Array(unsigned int);
        Array(Array const&);
        ~Array(void);
        Array&  operator=(Array const&);
        T&       operator[](size_t);
        size_t size(void) const;
};