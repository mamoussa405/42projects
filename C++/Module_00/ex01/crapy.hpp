/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crapy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 09:08:50 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/01 12:44:48 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CRAPY_H
# define _CRAPY_H
# include <iostream>
# include <string>
# include <iomanip>
# include <ctype.h>
# define BOLDGREEN   "\033[1m\033[32m"
# define BOLDBLUE    "\033[1m\033[34m"
# define CYAN    "\033[36m"
# define WHITE   "\033[37m"
# define BOLDRED     "\033[1m\033[31m"
# define BOLDYELLOW  "\033[1m\033[33m"
void    search_contact(Contact contacts[], unsigned int contact_size);

#endif