/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:32:00 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/18 16:42:46 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(std::string const & type)
{
    this->type = "ice";
    std::cout << "Default Ice type constructor called" << std::endl;
}
Ice::~Ice()
{
    std::cout << "Default Ice destructor called" << std::endl;
}

Ice::Ice(const Ice & fp)
{
    this->type = fp.type;
    std::cout << "Copy Ice constructor called" << std::endl;  
}
Ice& Ice::operator=(Ice const & fp)
{
    this->type = fp.type;
    return *this;
}

std::string const &Ice::getType() const
{
    return type;    
}
