/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:34:47 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/03 17:23:17 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("name"),grade_to_sig(0), grade_to_exc(0), is_signed(false)
{
     
}
AForm::AForm(std::string const name, int const grade_sig, int const grade_exc): name(name), grade_to_sig(grade_sig), grade_to_exc(grade_exc), is_signed(false)
{
  if(grade_to_sig < 1 || grade_to_exc < 1)
    throw GradeTooHighException();
  if(grade_to_sig > 150 || grade_to_exc > 150)
    throw GradeTooLowException();
}
AForm::~AForm()
{
  
}

AForm::AForm(const AForm & fp): name(fp.getName()), grade_to_sig(fp.getGradeToSig()), grade_to_exc(fp.getGradeToExc())
{
  
}
AForm& AForm::operator=(AForm const & fp)
{
    is_signed = fp.getSigned();
    return *this;
}

std::string AForm::getName() const
{
    return name;
}

int AForm::getGradeToExc() const
{
    return grade_to_exc;
}

int AForm::getGradeToSig() const
{
    return grade_to_sig;
}

bool AForm::getSigned() const
{
    return is_signed;
}

void AForm::beSigned(Bureaucrat & object)
{
    if(object.getGrade() > grade_to_sig)
        throw AForm::GradeTooLowException();
    else
        is_signed = true;
}
std::ostream& operator<<(std::ostream& o, AForm const & f)
{
    o << "Form "<< f.getName() << " with grade to sign of " << f.getGradeToSig() << " and grade to execute of " << f.getGradeToExc();
    return o;
}
