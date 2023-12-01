/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:34:47 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/01 15:23:29 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name(),grade_to_sig(150), grade_to_exc(100), is_signed(false)
{
     
}
Form::Form(std::string const name, int grade_sig, int grade_exc): name(name), grade_to_sig(grade_sig), grade_to_exc(grade_exc)
{
  if(grade_to_sig < 1 || grade_to_exc < 1)
    throw GradeTooHighException();
  if(grade_to_sig > 150 || grade_to_exc < 1)
    throw GradeTooLowException();
}
Form::~Form()
{
  
}

Form::Form(const Form & fp): name(fp.name), grade_to_sig(fp.grade_to_sig), grade_to_exc(fp.grade_to_exc)
{
  
}
Form& Form::operator=(Form const & fp)
{
    // this->is_signed = fp.getSigned();
    return *this;
}

int Form::getGradeToExc() const
{
    return grade_to_exc;
}

void Form::beSigned(Bureaucrat & object)
{
    if(object.getGrade() < grade_to_sig)
        is_signed = true;
    else
        is_signed = false;
}
