/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:37:32 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/01 15:26:05 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name(),grade(150)
{
     
}
Bureaucrat::Bureaucrat(std::string const name, int grade): name(name), grade(grade)
{
  if(grade < 1)
    throw GradeTooHighException();
  if(grade > 150)
    throw GradeTooLowException();
}
Bureaucrat::~Bureaucrat()
{
  
}

Bureaucrat::Bureaucrat(const Bureaucrat & fp): name(fp.name), grade(fp.grade)
{
  
}
Bureaucrat& Bureaucrat::operator=(Bureaucrat const & fp)
{
    this->grade = fp.getGrade();
    return *this;
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementBureaucrat()
{
  if(grade - 1 < 1)
    throw GradeTooHighException();
  --grade;
}

void Bureaucrat::decrememtBureaucrat() 
{
  if(grade + 1 > 150)
    throw GradeTooLowException();
  ++grade;
}

// void Bureaucrat::singForm(Form & object)
// {
//   if(object.is)
// }

std::ostream& operator<<(std::ostream& o, Bureaucrat const & f)
{
    o << f.getName() << " , bureaucrat grade " << f.getGrade();
    return o;
}
