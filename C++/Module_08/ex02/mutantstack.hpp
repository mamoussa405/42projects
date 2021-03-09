/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:54:29 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/09 16:02:42 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <deque>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>{
    public:
        MutantStack(void);
        MutantStack(MutantStack const&);
        ~MutantStack(void);
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        iterator begin(void);
        iterator end(void);
        reverse_iterator rbegin(void);
        reverse_iterator rend(void);
};