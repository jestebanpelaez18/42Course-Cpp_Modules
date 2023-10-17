/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:57:10 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/17 17:38:24 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    dogBrain =  new Brain();
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    delete dogBrain;
    std::cout << "Default Dog destructor called" << std::endl;
}

Dog::Dog(const Dog & fp) : AAnimal(fp)
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