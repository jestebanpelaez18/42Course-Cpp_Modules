/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:54:30 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/15 22:22:04 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Default Animal destructor called" << std::endl;
}

Animal::Animal(const Animal & fp)
{
    this->type = fp.type;
    std::cout << "Copy Animal constructor called" << std::endl;  
}
Animal& Animal::operator=(Animal const & fp)
{
    this->type = fp.type;
    return *this;
}

std::string Animal::getType(void) const
{
    return(type);
}

void Animal::makeSound() const
{
    std::cout << "Animal makes sounds" << std::endl;
}