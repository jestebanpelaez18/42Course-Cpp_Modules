/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:23:00 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/08 17:09:12 by jpelaez-         ###   ########.fr       */
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

bool Fixed::operator<(Fixed const &f)
{
    return(this->getRawBits() < f.getRawBits());
}

bool Fixed::operator>(Fixed const &f)
{
    return(this->getRawBits() > f.getRawBits());
}

bool Fixed::operator<=(Fixed const &f)
{
    return(this->getRawBits() <= f.getRawBits());
}

bool Fixed::operator>=(Fixed const &f)
{
    return(this->getRawBits() >= f.getRawBits());
}

bool Fixed::operator==(Fixed const &f)
{
    return(this->getRawBits() == f.getRawBits());
}

bool Fixed::operator!=(Fixed const &f)
{
    return(this->getRawBits() != f.getRawBits());
}

Fixed Fixed::operator+(Fixed const & f)
{
    return(this->getRawBits() + f.getRawBits());
}

Fixed Fixed::operator-(Fixed const & f)
{
    return(this->getRawBits() - f.getRawBits());
}

Fixed Fixed::operator*(Fixed const & f)
{
    return(this->getRawBits() * f.getRawBits());
}

Fixed Fixed::operator/(Fixed const & f)
{
    return(this->getRawBits() / f.getRawBits());
}

Fixed Fixed::operator++(void)
{
    ++this->fixed_point_number;
    return *this;
}    

Fixed Fixed::operator--(void)
{
    --this->fixed_point_number;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed fix(*this);
    ++this->fixed_point_number;
    return fix;
}    

Fixed Fixed::operator--(int)
{
    Fixed fix(*this);
    --this->fixed_point_number;
    return fix;
}

Fixed& Fixed::min(Fixed &f, Fixed &n)
{
    if(f.getRawBits() < n.getRawBits())
        return f;
    return n;
}

const Fixed& Fixed::min(Fixed const &f, Fixed const &n)
{
    if(f.getRawBits() < n.getRawBits())
        return f;
    return n;
}

Fixed& Fixed::min(Fixed &f, Fixed &n)
{
    if(f.getRawBits() > n.getRawBits())
        return f;
    return n;
}

const Fixed& Fixed::min(Fixed const &f, Fixed const &n)
{
    if(f.getRawBits() > n.getRawBits())
        return f;
    return n;
}

