/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 17:23:32 by mamoussa          #+#    #+#             */
/*   Updated: 2021/02/28 10:00:09 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target):Form(target, 145, 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void){}

std::string getTree(void)
{
    std::string tree = "          .     .  .      +     .      .          .\n";
    tree += "     .       .      .     #       .           .\n";
    tree += "        .      .         ###            .      .      .\n";
    tree += "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n";
    tree += "          .      . \"####\"###\"####\"  .\n";
    tree += "          .      . \"####\"###\"####\"  .\n";
    tree += "  .             \"#########\"#########\"        .        .\n";
    tree += "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n";
    tree += "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n";
    tree += "                .\"##\"#####\"#####\"##\"           .      .\n";
    tree += "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n";
    tree += "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n";
    tree += "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n";
    tree += "            .     \"      000      \"    .     .\n";
    tree += "       .         .   .   000     .        .       .\n";
    tree += ".. .. ..................O000O........................ ......\n";
    return tree;
}

void        ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (Form::getInd() && (executor.getGrade() <= Form::getExecGrade())) 
    {
        std::ofstream out(Form::getName()+"_shrubbery");
        if (out.good())
        {
            std::string tree = getTree();
            out << tree;
            out.close();
        }
        else
            std::cout<<"can't open the file"<<std::endl;
    }
    else
        throw Form::GradeTooHighException();
}