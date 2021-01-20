/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:50:08 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/20 11:06:04 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_CLASS_H
# define _FIXED_CLASS_H
# include <iostream>

class   Fixed{
    private:
        int                 _fp_value; //fixed point value
        static const int    _fb_number = 8; //number of fractional bits
    public:
        Fixed(void);
        Fixed(Fixed&);
        ~Fixed(void);
        Fixed&  operator=(Fixed&);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};
#endif