/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:02:49 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/12 18:21:20 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Default Cat destructor called" << std::endl;
}

Cat::Cat(const Cat & fp)
{
    *this = fp;
    std::cout << "Copy Cat constructor called" << std::endl;  
}
Cat& Cat::operator=(Cat const & fp)
{
    this->type = fp.type;
    return *this;
}

void Cat::makeSound()
{
    std::cout << "Miauuuuuuu" << std::endl;
}