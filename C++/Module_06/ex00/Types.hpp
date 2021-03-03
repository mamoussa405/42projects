/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Types.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:43:33 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/03 16:28:52 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES__HPP
# define TYPES__HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <math.h>
# include <ctype.h>
# include <sstream>
# include <limits>
class Types{
    private:
        char          _char_v;
        long long     _int_v;
        long double         _float_v;
        long double        _double_v; 
    public:
        Types(void);
        Types(Types const&);
        Types&  operator=(Types const&);
        ~Types(void);
        char    getChar(void) const;
        long long     getInt(void) const;
        long double   getFloat(void) const;
        long double  getDouble(void) const;
        void    setChar(char);
        void    setInt(long long);
        void    setFloat(long double);
        void    setDouble(long double);
};

void    type_detection(std::string &, Types &);
#endif