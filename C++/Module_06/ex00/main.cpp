/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:24:26 by mamoussa          #+#    #+#             */
/*   Updated: 2021/03/03 16:30:31 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Types.hpp"

int main(int argc, char** argv)
{
    Types ob;
    std::string input;
    if (argc != 2)
    {
        std::cerr << "The program must have 2 arguments" << std::endl;
        return 1;
    }
    std::stringstream s;
    s << argv[1];
    s >> input;
    type_detection(input, ob);
    //char part
    if (isprint(ob.getChar()))
        std::cout <<"char: '" <<  ob.getChar() << "'" << std::endl;
    else if(isnan(ob.getFloat()) || isinf(ob.getFloat()) || ob.getInt() > 
    std::numeric_limits<char>::max() || ob.getInt() < std::numeric_limits<char>::lowest())
        std::cout <<"char: impossible" << std::endl;
    else
        std::cout <<"char: "<<"Non displayable" << std::endl;
    //int part
    if (ob.getInt() > std::numeric_limits<int>::max() ||
    ob.getInt() < std::numeric_limits<int>::min() || isinf(ob.getFloat()) ||
    isnan(ob.getFloat()))
        std::cout <<"int: impossible" << std::endl;
    else
        std::cout <<"int: " << ob.getInt() << std::endl;
    //float part
    if ((!(ob.getFloat() <= std::numeric_limits<float>::max()) && 
    ob.getFloat() >= std::numeric_limits<float>::lowest()) && (!isnan(ob.getFloat()
    && !isinf(ob.getFloat()))))
    {
        std::cout <<"float: impossible" << std::endl;
    }
    if (isinf(ob.getFloat()) || isnan(ob.getFloat()))
        std::cout<< "float: " << ob.getFloat() << "f" << std::endl;
    else
        std::cout <<"float: " <<  ob.getFloat() << ".0f" << std::endl;
    //double part
    if ((ob.getFloat() > std::numeric_limits<double>::max() ||
    ob.getFloat() < std::numeric_limits<double>::lowest()) && (!isnan(ob.getDouble()) &&
    !isinf(ob.getDouble())))
        std::cout <<"double: impossible" << std::endl;
    if (isinf(ob.getDouble()) || isnan(ob.getDouble()))
        std::cout <<"double: "<< ob.getDouble() << std::endl;
    else
        std::cout <<"double: " << ob.getDouble() << ".0" << std::endl;
    return 0;
}