/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:23:00 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/06 14:13:38 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_number = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed & fp)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(fp.getRawBits());
}

Fixed & Fixed::operator=(Fixed const & fp)
{
    std::cout << "Copy assigment operator called" << std::endl;
    
    if(this != &fp)
        this->fixed_point_number = fp.getRawBits();
    
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member fuction called" << std::endl;
    return this->fixed_point_number;   
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_number = raw;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    this->number_fractional_bits;
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;

}