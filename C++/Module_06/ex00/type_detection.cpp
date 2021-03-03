/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_detection.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 09:26:07 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/03 15:43:56 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Types.hpp"

bool    is_int(std::string const& input)
{
    for (size_t i = 0; i < input.size(); ++i)
    {
        if (isdigit(input[i]) || input[i] == '-' || input[i] == '+')
            continue;
        else
            return 0;
    }
    return 1; 
}

bool    is_float(std::string const& input)
{
    for (size_t i = 0; i < input.size() - 1; ++i)
    {
        if ((input.back() == 'f') && (isdigit(input[i]) || input[i] == '-' || input[i] == '+' ||
        input[i] == '.'))
            continue;
        else
            return 0;
    }
    return 1; 
}

bool   is_double(std::string const& input)
{
    for (size_t i = 0; i < input.size(); ++i)
    {
        if (isdigit(input[i]) || input[i] == '-' || input[i] == '+' ||
        input[i] == '.')
            continue;
        else
            return 0;
    }
    return 1; 
}
void  type_detection(std::string & input, Types & ob)  
{
    if (input.size() == 1 && !isdigit(input[0]))
    {
        ob.setChar(static_cast<char>(input[0]));
        ob.setInt(static_cast<int>(input[0]));
        ob.setFloat(static_cast<float>(input[0]));
        ob.setDouble(static_cast<double>(input[0]));
    }
    else if (is_int(input))
    {
        try{
            ob.setInt(std::stoi(input));
        }
        catch(std::exception const & e)
        {
            std::cout << e.what() << std::endl;
            exit (1);
        }
        ob.setChar(static_cast<char>(ob.getInt()));
        ob.setFloat(static_cast<long double>(ob.getInt()));
        ob.setDouble(static_cast<long double>(ob.getInt()));
    }
    else if (is_float(input))
    {
        try{
            ob.setFloat(std::stof(input));
        }
        catch(std::exception const & e)
        {
            std::cout << e.what() << std::endl;
            exit (1);
        }
        ob.setInt(static_cast<long long>(ob.getFloat()));
        ob.setChar(static_cast<char>(ob.getFloat()));
        ob.setDouble(static_cast<double>(ob.getFloat()));
    }
    else if (is_double(input))
    {
        try
        {
            ob.setDouble(std::stod(input));
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            exit (1);
        }
        ob.setInt(static_cast<long long>(ob.getDouble()));
        ob.setFloat(static_cast<double>(ob.getDouble()));
        ob.setChar(static_cast<char>(ob.getDouble()));
    }
    else if (input == "-inff" || input == "+inff" || input == "nanf")
    {
        try
        {
            ob.setFloat(std::stof(input));
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            exit (1);
        }
        ob.setInt(static_cast<int>(ob.getFloat()));
        ob.setChar(static_cast<char>(ob.getFloat()));
        ob.setDouble(static_cast<double>(ob.getFloat()));
    }
    else if (input == "-inf" || input == "+inf" || input == "nan")
    {
        try
        {
            ob.setDouble(std::stod(input));
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            exit (1);
        }
        ob.setInt(static_cast<int>(ob.getDouble()));
        ob.setFloat(static_cast<float>(ob.getDouble()));
        ob.setChar(static_cast<char>(ob.getDouble()));
    }
    else
    {
        std::cout << "unkown type" << std::endl;
        exit (1);
    }
}