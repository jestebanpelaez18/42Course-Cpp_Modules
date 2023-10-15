/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:57:10 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/15 22:13:08 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Default Dog destructor called" << std::endl;
}

Dog::Dog(const Dog & fp) : Animal(fp)
{
    std::cout << "Copy Dog constructor called" << std::endl;  
}
Dog& Dog::operator=(Dog const & fp)
{
    this->type = fp.getType();
    return *this;
}

void Dog::makeSound() const 
{
    std::cout << "Guau guau" << std::endl;
}