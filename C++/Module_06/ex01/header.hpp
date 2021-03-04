/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:14:36 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/03 18:16:23 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER__HPP
# define HEADER__HPP
# include <iostream>
struct Data
{
    std::string s1;
    int n;
    std::string s2;
};
void * serialize(void);
Data * deserialize(void*);
#endif