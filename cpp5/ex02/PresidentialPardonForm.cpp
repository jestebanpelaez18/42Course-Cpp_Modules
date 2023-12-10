/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:35:58 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/10 16:25:11 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): target(" "), AForm("PesidentialPardonForm",25,5)
{
    
}
PresidentialPardonForm::PresidentialPardonForm(std::string target): target(target), AForm("PesidentialPardonForm",25,5)
{
    
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & fp)
{
    target = fp.target;
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & fp): target(fp.target)
{
    *this = fp;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > this->getGradeToExc())
        throw AForm::GradeTooLowException();
    else
        std::cout << target << " has been pardoned by Zaphod Beeblebrox. " << std::endl;
}