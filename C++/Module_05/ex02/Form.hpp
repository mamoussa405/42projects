/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:19:24 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/28 10:44:50 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM__HPP
# define FORM__HPP
# include <fstream>
# include "Bureaucrat.hpp"

class Form{
    private:
        std::string const    _name;
        bool                 _is_signed;
        size_t const         _sign_grade;
        size_t const         _execute_grade;
        Form(void);
    public:
        Form(std::string const&, int, int);
        Form(Form const&);
        virtual ~Form(void);
        Form&   operator=(Form const&);
        std::string const&  getName(void) const;
        bool                getInd(void) const;
        size_t              getSignGrade(void)  const;
        size_t              getExecGrade(void) const;
        void                beSigned(Bureaucrat const &);
        virtual void                execute(Bureaucrat const &) const = 0;
        class GradeTooHighException: public std::exception{
            public:
                const char* what(void) const throw();
        };
        class GradeTooLowException: public std::exception{
            public:
                const char* what(void) const throw();
        };
};
std::ostream&   operator<<(std::ostream&, Form const &);
#endif