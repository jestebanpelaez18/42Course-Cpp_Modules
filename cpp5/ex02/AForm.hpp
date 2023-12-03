/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:34:58 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/03 17:22:07 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm
{   
    private:
    std::string const name;
    int const grade_to_sig;
    int const grade_to_exc;
    bool is_signed;

    public:
    AForm();
    AForm(std::string const name, int const grade_sig, int const grade_exc);
    ~AForm();
    AForm& operator=(AForm const & fp);
    AForm(const AForm & fp);
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

std::ostream& operator<<(std::ostream& o, AForm const & f);

#endif