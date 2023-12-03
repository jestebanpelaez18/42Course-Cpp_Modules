/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:56:24 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/03 17:09:21 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    //No exception//
    try
    {
        Form Teemu("Teemu",3, 34);
        std::cout << Teemu << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Too High//
    try
    {
        Form Rasmus("Rasmus", 0, 32);
        std::cout << Rasmus << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Form Rasmus2("Rasmus", 1, 0);
        std::cout << Rasmus2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Too Low
    try
    {
        Form Jun("Jun", 152, 12);
        std::cout << Jun << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Form Jun2("Jun", 13, 1222);
        std::cout << Jun2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // No exception
    try
    {
        Form Teemu3("Teemu", 13, 148);
        std::cout << Teemu3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // signed Form
    try
    {
        Form Rasmus3("Rasmus", 25, 50);
        Bureaucrat Juan("Juan",12);
        std::cout << Rasmus3 << std::endl;
    
        Juan.singForm(Rasmus3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // could not sign
    try
    {
        Form Rasmus3("Rasmus", 25, 50);
        Bureaucrat Juan("Juan",32);
        std::cout << Rasmus3 << std::endl;
    
        Juan.singForm(Rasmus3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}