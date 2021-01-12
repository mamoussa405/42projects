/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:04:46 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/09 18:56:36 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_H
# define _BRAIN_H
# include <iostream>
# include <sstream>
class Brain{
    public:
        Brain(void);
        ~Brain(void);
        const std::string  identify(void) const;
};
#endif