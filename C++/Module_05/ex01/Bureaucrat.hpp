/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:42:59 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/26 15:55:09 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT__HPP
# define BUREAUCRAT__HPP 
# include <iostream>
class Bureaucrat{
    private:
        std::string const _name;
        size_t            _grade;
        Bureaucrat(void);
    public:
        Bureaucrat(std::string const, int);
        Bureaucrat(Bureaucrat const&);
        ~Bureaucrat(void);
        Bureaucrat&         operator=(Bureaucrat const&);
        std::string const&  getName(void) const;
        size_t              getGrade(void) const;
        void                incrementGrade(void);
        void                decrementGrade(void);
        void                signForm(size_t, std::string const &) const;
        class GradeTooHighException: public std::exception{
            public:
                const char* what(void) const throw();
        };
        class GradeTooLowException: public std::exception{
            public:
                const char* what(void) const throw();
        };
};

std::ostream&    operator<<(std::ostream &, Bureaucrat const&);
#endif