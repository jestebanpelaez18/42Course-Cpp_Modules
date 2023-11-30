/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:56:24 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/11/30 18:32:09 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    //No exception//
    try
    {
        Bureaucrat Teemu("Teemu",3);
        std::cout << Teemu << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Too High//
    try
    {
        Bureaucrat Rasmus("Rasmus", 0);
        std::cout << Rasmus << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Too Low
    try
    {
        Bureaucrat Jun("Jun", 152);
        std::cout << Jun << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Increment
    try
    {
         Bureaucrat test("Rasmus", 1);
         std::cout << test << std::endl;
         test.incrementBureaucrat();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Decrement
    try
    {
        Bureaucrat test1("Jun", 150);
         std::cout << test1 << std::endl;
        test1.decrememtBureaucrat();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}