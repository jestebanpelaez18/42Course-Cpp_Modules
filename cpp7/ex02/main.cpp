/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:33:09 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/21 20:10:27 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> test1;
    Array<int> test2(10);
    Array<int> test3(7);

    for (int i = 0; i < test2.size(); i++)
        test2[i] = i;
    /*Valid index*/
    try
    {
        std::cout << "valid index: " << test2[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /*Invalid index*/
    try
    {
        std::cout << test2[111] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /*test3*/
    for (int i = 0; i < test3.size(); i++)
        test3[i] = i * 2;
    test1 = test3;
    try
    {
        std::cout << "valid index in test 1: " << test1[2] << std::endl;
        std::cout << "valid index in test 3: " << test3[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /*Invalid index*/
    try
    {
        std::cout << "in test 1: " << test1[7] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "in test 3: " << test3[7] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /* Modify test1*/
    test1[2] = 3;

    std::cout << test1[2] << std::endl;
    std::cout << test3[2] << std::endl;
    return(0);
}