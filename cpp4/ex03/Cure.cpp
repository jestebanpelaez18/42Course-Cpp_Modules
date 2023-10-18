/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:32:09 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/18 17:37:16 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(std::string const & type)
{
    this->type = "cure";
    std::cout << "Default Cure type constructor called" << std::endl;
}
Cure::~Cure()
{
    std::cout << "Default Cure destructor called" << std::endl;
}

Cure::Cure(const Cure & fp)
{
    this->type = fp.type;
    std::cout << "Copy Cure constructor called" << std::endl;  
}
Cure& Cure::operator=(Cure const & fp)
{
    this->type = fp.type;
    return *this;
}

std::string const &Cure::getType() const
{
    return type;    
}