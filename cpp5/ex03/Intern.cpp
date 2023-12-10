/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:57:49 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/10 17:34:52 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    
}
Intern::~Intern()
{
    
}

Intern& Intern::operator=(Intern const & fp)
{
    return *this;
}

Intern::Intern(const Intern & fp)
{
    *this = fp;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    AForm* forms[] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target) };
    std::string str[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

    for(int i = 0;i < 3; i++)
    {
        if(str[i] == name)
        {
            std::cout << "Intern creates " << str[i] << std::endl;
            return(forms[i]);
        }
    }
    std::cout << "can not make Form" << std::endl;
    return nullptr;
}