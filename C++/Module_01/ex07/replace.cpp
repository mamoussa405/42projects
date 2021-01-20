/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 18:22:52 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/13 10:52:28 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void replace_str(std::string& line, std::string org, std::string sub)
{
    size_t index;
    size_t len;
    size_t  pos;

    len = org.size();
    pos = 0;
    while ((index = line.find(org, pos)) != std::string::npos)
    {
        pos = index + 1;
        line.replace(index, len, sub);
    }
}

void string_checker(char **argv)
{
    if (std::string(argv[2]).empty())
    {
        std::cout<<"the first string is empty"<<std::endl;
        exit(1);
    }
    if (std::string(argv[3]).empty())
    {
        std::cout<<"the seconde string is empty"<<std::endl;
        exit(1);
    }
}

std::string    to_upper(std::string str)
{
    std::string ans;
    for(size_t i = 0; i < str.size(); ++i)
        ans.push_back(toupper(str[i]));
    return ans;
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        string_checker(argv);
        std::string     res;
        std::ifstream   ifs;
        std::string     line;
        std::ofstream   ofs;
        std::stringstream s;

        s << argv[1];
        s >> res;
        ifs.open(argv[1], std::ifstream::in);
        if(!ifs.is_open())
        {
            std::cout<<"Can't open the file:"<<argv[1]<<std::endl;
            return 1;
        }
        res = to_upper(res);
        res += ".replace";
        ofs.open(res, std::ofstream::out);
        if(!ofs.is_open())
        {
            ifs.close();
            std::cout<<"Can't open the file:"<<"res"<<std::endl;
            return 1;
        }
        while (!ifs.eof())
        {
            if (ifs.good())
            {
                if (std::getline(ifs, line))
                    line += '\n';
                replace_str(line,argv[2], argv[3]);
            }
            else
            {
                ifs.close();
                ofs.close();
                std::cout<<"Can't read from the file: "<<argv[1]<<std::endl;
                return 1;
            }
            if(ofs.good())
                ofs<<line;
            else
            {
                ifs.close();
                ofs.close();
                std::cout<<"Can't write to the file: "<<"res"<<std::endl;
                return 1;
            }
        }
        ifs.close();
        ofs.close();
    }
    else
    {
       std::cout<<"the programme should have 3 arguments"<<std::endl;
       return 1;
    }
    return 0;
}