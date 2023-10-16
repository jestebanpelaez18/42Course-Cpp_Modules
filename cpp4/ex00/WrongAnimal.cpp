/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:34:49 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/16 13:45:39 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "Wrong Animal";
    std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & fp)
{
    *this = fp;
    std::cout << "Copy WrongAnimal constructor called" << std::endl;  
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal const & fp)
{
    this->type = fp.type;
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return(type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes sounds" << std::endl;
}
