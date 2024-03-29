/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:19:23 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/22 17:38:30 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return (1);
    }
    for(int i = 1 ; i < argc; i++)
    {
        if(isdigit(argv[i][0]) == 0)
        {
            std::cout << "Error: Invalid argument" << std::endl;
            return (1);
        }
    }
    int number;
    std::deque<int> dq;
    std::vector<int> vc;
    for(int i = 1; i < argc; i++)
    {
        number = atoi(argv[i]);
        if(number < 0)
        {
            std::cout << "Error: Negative number" << std::endl;
            return (1);   
        }
        dq.push_back(number);
        vc.push_back(number);
    }
    PMergeMe pmerge;
    pmerge.run(dq, vc);
}