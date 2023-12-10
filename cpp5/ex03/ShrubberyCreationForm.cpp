/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:36:25 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/10 16:37:52 by jpelaez-         ###   ########.fr       */
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
    target = fp.target;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& fp): target(fp.target)
{
    *this = fp;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > this->getGradeToExc())
        throw AForm::GradeTooLowException();
    else
    {
        std::string file = target + "_shrubbery";
        std::ofstream outfile(file);
        if(!outfile.is_open())
            return ;
        std::string tree =         "    ^   \n"
        "   ^^^  \n"
        "  ^^^^^ \n"
        " ^^^^^^^\n"
        "^^^^^^^^^\n";
        outfile << tree;
        outfile.close();
    }
}