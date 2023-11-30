/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:34:58 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/11/30 21:48:54 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>

class Form
{   
    private:
    std::string const name;
    bool is_signed;
    int const grade;
    int const grade_to_exc;

    public:
    Form();
    Form(std::string const name, int grade);
    ~Form();
    Form& operator=(Form const & fp);
    Form(const Form & fp);
    std::string getName() const;
    int getGrade() const;
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