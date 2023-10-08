/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:23:07 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/08 17:08:40 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
    private:
    int fixed_point_number;
    static const int number_fractional_bits = 8;
    
    public:
    Fixed();
    ~Fixed();
    Fixed& operator=(Fixed const & fp);
    Fixed(const Fixed & fp);
    std::ostream& operator<<(std::ostream& o, Fixed const & f);

    Fixed(const int  val);
    Fixed(const float  val);
    
    int getRawBits(void)const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
    
    /*Comparations operators*/

    bool operator<(Fixed const &f);
    bool operator>(Fixed const &f);
    bool operator<=(Fixed const &f);
    bool operator>=(Fixed const &f);
    bool operator!=(Fixed const &f);
    bool operator==(Fixed const &f);

    /*Arithmetic operators*/

    Fixed operator+(Fixed const & f);
    Fixed operator-(Fixed const & f);
    Fixed operator*(Fixed const & f);
    Fixed operator/(Fixed const & f);

    
   /*Incrementent/decrement operators*/

   Fixed operator++(void);
   Fixed operator--(void);     
   Fixed operator++(int);
   Fixed operator--(int);

   /*Max min fuctions*/

    static const Fixed& min(Fixed const &f, Fixed const &n);
    static Fixed& min(Fixed &f, Fixed &n);
    static const Fixed& max(Fixed const &f, Fixed const &n);
    static Fixed& max(Fixed &f, Fixed &n);
};

#endif