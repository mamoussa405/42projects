/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:44:41 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/06 11:01:41 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

template<typename T>
int     easyfind(T data, int n)
{
   typename T::iterator it;
   it = find(data.begin(), data.end(), n); 
   if (it != data.end())
      return *it;
   return ((!n) ? -1:0);
}
