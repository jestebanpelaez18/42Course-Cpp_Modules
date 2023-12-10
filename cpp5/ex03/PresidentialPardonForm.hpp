/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:36:12 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/10 15:37:06 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    private:

    std::string target;

    public:
    
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(PresidentialPardonForm const & fp);
    PresidentialPardonForm(const PresidentialPardonForm & fp);
    void execute(Bureaucrat const & executor) const;
};

#endif