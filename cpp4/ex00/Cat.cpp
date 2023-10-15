/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:02:49 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/15 22:17:44 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Default Cat destructor called" << std::endl;
}

Cat::Cat(const Cat & fp) : Animal(fp)
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