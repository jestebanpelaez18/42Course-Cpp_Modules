/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:34:47 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/02 19:04:42 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("name"),grade_to_sig(0), grade_to_exc(0), is_signed(false)
{
     
}
Form::Form(std::string const name, int grade_sig, int grade_exc): name(name), grade_to_sig(grade_sig), grade_to_exc(grade_exc), is_signed(false)
{
  if(grade_to_sig < 1 || grade_to_exc < 1)
    throw GradeTooHighException();
  if(grade_to_sig > 150 || grade_to_exc > 150)
    throw GradeTooLowException();
}
Form::~Form()
{
  
}

Form::Form(const Form & fp): name(fp.getName()), grade_to_sig(fp.getGradeToSig()), grade_to_exc(fp.getGradeToExc())
{
  
}
Form& Form::operator=(Form const & fp)
{
    is_signed = fp.getSigned();
    return *this;
}

std::string Form::getName() const
{
    return name;
}

int Form::getGradeToExc() const
{
    return grade_to_exc;
}

int Form::getGradeToSig() const
{
    return grade_to_sig;
}

bool Form::getSigned() const
{
    return is_signed;
}

void Form::beSigned(Bureaucrat & object)
{
    if(object.getGrade() > grade_to_sig)
        throw Form::GradeTooLowException();
    else
        is_signed = true;
}
