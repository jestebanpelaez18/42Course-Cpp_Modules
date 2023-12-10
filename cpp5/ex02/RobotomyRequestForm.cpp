/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:36:18 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/10 16:41:03 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): target(" "), AForm("RobotomyRequestForm",72,45)
{
    
}
RobotomyRequestForm::RobotomyRequestForm(std::string target): target(target),  AForm("RobotomyRequestForm",72,45)
{
    
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & fp)
{
    target = fp.target;
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & fp): target(fp.target)
{
    *this = fp;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > this->getGradeToExc())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << "Makes some drilling noises. " << std::endl;
        static int i;
        if(i % 2 == 0)
            std::cout << target << " has been robotomized" << std::endl;
        else 
            std::cout << "the robotomy failed" << std::endl;
        i++;
    }  

}