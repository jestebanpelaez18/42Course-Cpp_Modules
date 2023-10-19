/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:32:00 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/19 15:13:36 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Default Ice constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Default Ice destructor called" << std::endl;
}

Ice::Ice(const Ice & fp) : AMateria(fp.getType())
{
    *this= fp;
    std::cout << "Copy Ice constructor called" << std::endl;  
}
Ice& Ice::operator=(Ice const & fp)
{
    if(this != &fp)
        this->type = fp.type;
    return *this;
}

std::string const &Ice::getType() const
{
    return type;    
}

Ice* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << " * shoots an ice bolt at " <<  target.getName() << " * " << std::endl;
}