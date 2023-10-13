/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:34:49 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/12 18:38:54 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
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