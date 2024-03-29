/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:10:58 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/23 17:54:23 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() 
{
    /*Subject Examples*/
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    /*Test were we had more values in a full vector*/
    try
    {
        sp.addNumber(12);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    /*Big test*/
    // Span bt = Span(10000);
    
    // for (int i = 0; i < 10000; ++i)
    //     bt.addNumber(i);
    // std::cout << bt.shortestSpan() << std::endl;
    // std::cout << bt.longestSpan() << std::endl;
    // try
    // {
    //     sp.addNumber(200000);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // } 
    /*Test with random numbers*/
    // Span rn = Span(5);

    // for (int i = 0; i < 5; i++)
    //     rn.addNumber(rand() % 100);
    
    // rn.getNumbers();
    // std::cout << rn.shortestSpan() << std::endl;
    // std::cout << rn.longestSpan() << std::endl; 
    // try
    // {
    //     rn.addNumber(67);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    /*Function that creates random vectors*/

    Span rn2 = Span(5);

    rn2.addRandomNumbers();
    rn2.getNumbers();
    std::cout << rn2.shortestSpan() << std::endl;
    std::cout << rn2.longestSpan() << std::endl; 
    try
    {
        rn2.addNumber(67);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
