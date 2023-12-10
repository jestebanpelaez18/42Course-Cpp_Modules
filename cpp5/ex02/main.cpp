/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:56:24 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/10 16:43:15 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    // /*Presidential Pardon*/
    // try
    // {
    //     Bureaucrat Teemu("Teemu",2);
    //     PresidentialPardonForm Pre("President");

    //     Teemu.singForm(Pre);
    //     Teemu.executeForm(Pre);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // /*Presidential Pardon grade to execute to low*/
    // try
    // {
    //     Bureaucrat Teemu("Teemu",10);
    //     PresidentialPardonForm Pre("President");

    //     Teemu.singForm(Pre);
    //     Teemu.executeForm(Pre);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }


    /*Robotomy Request*/
    try
    {
        Bureaucrat Teemu("Teemu",2);
        RobotomyRequestForm Rob("Robot");

        Teemu.singForm(Rob);
        Teemu.executeForm(Rob);
        Teemu.executeForm(Rob);
        Teemu.executeForm(Rob);
        Teemu.executeForm(Rob);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /*Robotomy grade to execute to low*/
    try
    {
        Bureaucrat Teemu("Teemu",60);
        RobotomyRequestForm Rob("Robot");

        Teemu.singForm(Rob);
        Teemu.executeForm(Rob);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }





    // /*ShrubberyCreation form*/
    // try
    // {
    //     Bureaucrat Teemu("Teemu",2);
    //     ShrubberyCreationForm Shr("Hola");

    //     Teemu.singForm(Shr);
    //     Teemu.executeForm(Shr);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // /*Presidential Pardon grade to execute to low*/
    // try
    // {
    //     Bureaucrat Teemu("Teemu",140);
    //     ShrubberyCreationForm Shr("Hola");

    //     Teemu.singForm(Shr);
    //     Teemu.executeForm(Shr);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
}