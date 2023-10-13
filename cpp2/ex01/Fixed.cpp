/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:23:00 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/13 15:43:05 by jpelaez-         ###   ########.fr       */
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
    return this->fixed_point_number;   
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_number = raw;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    fixed_point_number = val << number_fractional_bits;
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    fixed_point_number =  std::roundf(val * ( 1 << number_fractional_bits));
}

std::ostream& operator<<(std::ostream& o, Fixed const & f)
{
    o << f.toFloat();
    return o;
}

int Fixed::toInt(void) const
{
    return(fixed_point_number >> number_fractional_bits);
}

float Fixed::toFloat(void) const
{
    return(float(fixed_point_number) / float(1 << number_fractional_bits));
}