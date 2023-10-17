/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:46:23 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/16 13:59:05 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Default Cat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & fp) : WrongAnimal(fp)
{
    std::cout << "Copy Cat constructor called" << std::endl;  
}
WrongCat& WrongCat::operator=(WrongCat const & fp)
{
    this->type = fp.getType();
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Miauuuuuuu" << std::endl;
}