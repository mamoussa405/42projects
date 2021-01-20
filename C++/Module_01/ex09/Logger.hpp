/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:34:57 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/12 18:37:22 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LOGGER_H
# define _LOGGER_H
# include <iostream>
# include <fstream>

class Logger{
    private:
        void        logToConsole(std::string const) const;
        void        logToFile(std::string const);
        std::string makeLogEntry(std::string const) const;
        std::ofstream ofs;
    public:
        Logger();
        ~Logger();
        void    log(std::string const &, std::string const &);
};
#endif