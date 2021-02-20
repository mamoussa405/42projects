/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 15:21:46 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/20 16:31:45 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE__HPP
# define MATERIASOURCE__HPP
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria*   _source[4];
        size_t      _idx;
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &);
        ~MateriaSource(void);
        MateriaSource&  operator=(MateriaSource const &);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
#endif