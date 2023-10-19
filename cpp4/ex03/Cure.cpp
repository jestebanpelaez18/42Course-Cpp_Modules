/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:32:09 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/19 15:13:26 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Default Cure constructor called" << std::endl;
}
Cure::~Cure()
{
    std::cout << "Default Cure destructor called" << std::endl;
}

Cure::Cure(const Cure & fp) : AMateria(fp.getType())
{
    *this = fp;
    std::cout << "Copy Cure constructor called" << std::endl;  
}
Cure& Cure::operator=(Cure const & fp)
{
    if(this != &fp)
        this->type = fp.type;
    return *this;
}

std::string const &Cure::getType() const
{
    return type;    
}

Cure* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << " * heals  " <<  target.getName() << " 's wounds *" <<std::endl;
}