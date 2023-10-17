/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:02:49 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/17 17:38:06 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    catBrain = new Brain();
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    delete catBrain;
    std::cout << "Default Cat destructor called" << std::endl;
}

Cat::Cat(const Cat & fp) : AAnimal(fp)
{
    std::cout << "Copy Cat constructor called" << std::endl;  
}
Cat& Cat::operator=(Cat const & fp)
{
    this->type = fp.getType();
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Miauuuuuuu" << std::endl;
}