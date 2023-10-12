/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:54:30 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/12 18:00:52 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Default Animal destructor called" << std::endl;
}

Animal::Animal(const Animal & fp)
{
    *this = fp;
    std::cout << "Copy Animal constructor called" << std::endl;  
}
Animal& Animal::operator=(Animal const & fp)
{
    this->type = fp.type;
    return *this;
}