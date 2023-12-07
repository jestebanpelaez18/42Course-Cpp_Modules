/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:36:18 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/07 17:40:55 by jpelaez-         ###   ########.fr       */
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
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & fp): target(fp.target)
{
    
}