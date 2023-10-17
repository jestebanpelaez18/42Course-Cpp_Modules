/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:24:12 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/17 18:37:45 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Default AAMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
        
}
AMateria::~AMateria()
{
    std::cout << "Default AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria & fp)
{
    this->type = fp.type;
    std::cout << "Copy AAnimal constructor called" << std::endl;  
}
AMateria& AMateria::operator=(AMateria const & fp)
{
    this->type = fp.type;
    return *this;
}