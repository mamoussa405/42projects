/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:54:29 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/07 12:34:24 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <vector>
# include <stack>
# include <algorithm>

template<typename T>
class MutantStack: public std::stack<T>{
    private:
        std::vector<T> _v;
    public:
        typename T*  iterator;
        MutantStack(void);
        MutantStack(MutantStack const&);
        ~MutantStack(void);
        MutantStack<T>&    operator=(MutantStack const&);
        void        push(T);
        void        pop(void);
        T           top(void);
        size_t      size(void) const;
        typename std::vector<T>::iterator& begin(void) const;
        typename std::vector<T>::iterator& end(void) const;
};