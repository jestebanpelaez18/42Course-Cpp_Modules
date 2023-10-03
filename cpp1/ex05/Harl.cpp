/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:13:47 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/03 19:10:36 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love extra bacon for my double-cheese-triple-pickle-special- ketchup burger";
    std::cout << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*f_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int i = 0;i < 4; i++)
    {
        if(str[i] == level)
             (this->*f_complain[i])();
    }
}