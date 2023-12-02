/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:34:58 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/02 19:33:10 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{   
    private:
    std::string const name;
    int const grade_to_sig;
    int const grade_to_exc;
    bool is_signed;

    public:
    Form();
    Form(std::string const name, int const grade_sig, int const grade_exc);
    ~Form();
    Form& operator=(Form const & fp);
    Form(const Form & fp);
    std::string getName() const;
    int getGradeToSig() const;
    int getGradeToExc() const;
    bool getSigned() const;
    void beSigned(Bureaucrat & object);
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

std::ostream& operator<<(std::ostream& o, Form const & f);

#endif