/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:17:11 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/09 18:58:11 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_H
# define _HUMAN_H
# include "Brain.hpp"
class Human{
    private:
        const Brain _inst;
    public:
        Human(void);
        ~Human(void);
        const std::string  identify(void) const;
        const Brain&   getBrain(void) const;
};
#endif