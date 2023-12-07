/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:35:58 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/07 17:41:07 by jpelaez-         ###   ########.fr       */
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
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & fp): target(fp.target)
{
    
}