/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:57:10 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/13 17:46:03 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Default Dog destructor called" << std::endl;
}

Dog::Dog(const Dog & fp)
{
    *this = fp;
    std::cout << "Copy Dog constructor called" << std::endl;  
}
Dog& Dog::operator=(Dog const & fp)
{
    this->type = fp.type;
    return *this;
}

void Dog::makeSound() const 
{
    std::cout << "Guau guau" << std::endl;
}