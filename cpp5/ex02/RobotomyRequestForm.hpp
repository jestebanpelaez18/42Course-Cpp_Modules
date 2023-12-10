/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:36:22 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/10 15:38:15 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
    private:

    std::string target;

    public:
    
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator=(RobotomyRequestForm const & fp);
    RobotomyRequestForm(const RobotomyRequestForm & fp);
    void execute(Bureaucrat const & executor) const;
};

#endif