/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:21:35 by mamoussa          #+#    #+#             */
/*   Updated: 2020/12/24 17:20:06 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;
    size_t count;

    i = 1;
    j = 0;
    count = 0;
    if (argc == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    else
    {
        while (--argc)
        {
            j = 0;
            while (argv[i][j])
            {
                if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    std::cout<<(char)(argv[i][j] - 32);
                else
                    std::cout<<argv[i][j];
                j++;
            }
            i++;
        }
        std::cout<<std::endl; 
    }
    return (0);
}