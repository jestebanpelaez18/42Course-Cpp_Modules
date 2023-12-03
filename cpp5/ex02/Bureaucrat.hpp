/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:55:10 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/02 18:48:10 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{   
    private:
    const std::string name;
    int grade;
    
    public:
    Bureaucrat();
    Bureaucrat(std::string const name, int grade);
    ~Bureaucrat();
    Bureaucrat& operator=(Bureaucrat const & fp);
    Bureaucrat(const Bureaucrat & fp);
    std::string getName() const;
    int getGrade() const;
    void singForm(Form & object);
    void incrementBureaucrat();
    void decrememtBureaucrat();
    class GradeTooHighException: public std::exception
    {
        const char * what () const throw () {
        return "Grade too high";
        }
    };
    class GradeTooLowException: public std::exception
    {
        const char * what () const throw () {
        return "Grade too low";
        }
    };
    
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const & f);

#endif