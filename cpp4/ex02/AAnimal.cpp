/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:54:30 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/17 18:19:41 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Default AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal & fp)
{
    this->type = fp.type;
    std::cout << "Copy AAnimal constructor called" << std::endl;  
}
AAnimal& AAnimal::operator=(AAnimal const & fp)
{
    this->type = fp.type;
    return *this;
}

std::string AAnimal::getType(void) const
{
    return(type);
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal makes sounds" << std::endl;
}