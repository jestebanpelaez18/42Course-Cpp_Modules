/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:37:32 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/03 17:08:21 by jpelaez-         ###   ########.fr       */
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

void Bureaucrat::singForm(Form & object)
{
  try
  {
    object.beSigned(*this);
    std::cout << name << " signed " << object.getName() << std::endl;
  }
  catch(const std::exception &e)
  {
    std::cerr << name << " couldn’t sign " << object.getName() << " because " << e.what() << '\n';
  }
  
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const & f)
{
    o << f.getName() << " , bureaucrat grade " << f.getGrade();
    return o;
}
