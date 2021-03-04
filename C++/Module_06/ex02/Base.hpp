/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:34:20 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/04 10:43:05 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
class Base{
    public:
        virtual ~Base(void);
};
Base * generate(void);
void identify_from_pointer(Base *);
void identify_from_reference(Base &);