/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:50:08 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/20 16:14:36 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_CLASS_H
# define _FIXED_CLASS_H
# include <iostream>
# include <cmath>

class   Fixed{
    private:
        float                 _fp_value; //fixed point value
        static const int    _fb_number = 8; //number of fractional bits
    public:
        Fixed(void);
        Fixed(const Fixed&);
        ~Fixed(void);
        Fixed&  operator=(const Fixed&);
        Fixed(const int );
        Fixed(const float);
        float   toFloat(void) const;
        int     toInt(void) const;
};
std::ostream& operator<<(std::ostream&, const Fixed&);
#endif