/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:56:24 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/10 17:47:01 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern  someRandomIntern;
    AForm*   rrf;
    
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    delete rrf;

    // Intern  someRandomIntern1;
    // AForm*   rrf1;
    
    // rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    // delete rrf1;

    // Intern  someRandomIntern2;
    // AForm*   rrf2;
    
    // rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    // delete rrf2;
}