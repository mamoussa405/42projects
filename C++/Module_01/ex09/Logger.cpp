/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:46:41 by mamoussa          #+#    #+#             */
/*   Updated: 2021/01/13 10:54:05 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger()
{
    ofs.open("file.res", std::ofstream::out | std::ofstream::app);
    if(!ofs.is_open())
    {
        std::cout<<"can't open file for writing"<<std::endl;
        exit(1);
    }
}

Logger::~Logger(){
    ofs.close();
};

void        Logger::logToConsole(std::string const mess) const
{
    std::cout<<mess<<std::endl;    
}

void        Logger::logToFile(std::string const mess)
{
    this->ofs<<mess<< std::endl;
}

std::string Logger::makeLogEntry(std::string const mess) const
{
    std::string newStr;
    std::string esp = " ";
    std::string curTimeStr;
    time_t curTime = time(0);

    curTimeStr = ctime(&curTime);
    curTimeStr.pop_back();
    newStr = curTimeStr + esp + mess;
    return newStr;
}

void    Logger::log(std::string const & dest, std::string const & mess)
{
    void (Logger::*logToC)(std::string const) const = &Logger::logToConsole;
    void (Logger::*logToF)(std::string const) = &Logger::logToFile;

    if (dest == "logToConsole")
        (this->*logToC)(this->makeLogEntry(mess));
    else if (dest == "logToFile")
        (this->*logToF)(this->makeLogEntry(mess));
    else
        std::cout<<"No function call"<<std::endl;
}