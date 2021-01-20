/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:50:51 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/13 10:32:30 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    read_from_file(char **argv)
{
    std::ifstream ifs;
    std::string   line;
    size_t         i;

    i = 1;
    while (argv[i])
    {
        ifs.open(argv[i], std::ifstream::in);
        if (!ifs.is_open())
            std::cout<<argv[i]<<": No such file or directory"<<std::endl;
        while (!ifs.eof() && ifs.good())
        {
            if (ifs.good())
            {
                if (getline(ifs, line))
                    line += '\n';
                std::cout<<line;
            }
            else
            {
                ifs.close();
                std::cout<<"We can't read from the file"<<std::endl;
            }
        }
        ifs.close();
        i++;
    }
}

void    read_from_stdin(void)
{
    std::string line;

    while (!std::cin.eof())
    {
        if (std::cin.good())
        {
            if (getline(std::cin, line))
                line += '\n';
            std::cout<<line;
        }
        else
        {
            std::cout<<"We can't read from STDIN"<<std::endl;
            exit(1);
        }
    }
}

int main(int argc, char **argv)
{
    if (argc >= 2)
        read_from_file(argv);
    else if (argc == 1)
        read_from_stdin();
    else
    {
        std::cout<<"We need just one argument"<<std::endl;
        return 1;
    }
    return 0;
}