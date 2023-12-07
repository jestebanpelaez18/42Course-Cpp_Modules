/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:36:25 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/07 17:41:19 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): target(" "), AForm("ShrubberyCreationForm", 145,137)
{
    
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): target(target),  AForm("ShrubberyCreationForm", 145,137)
{
    
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & fp)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& fp): target(fp.target)
{
    
}