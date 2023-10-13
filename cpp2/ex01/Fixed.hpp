/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:23:07 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/13 15:36:24 by jpelaez-         ###   ########.fr       */
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
    Fixed(const int  val);
    Fixed(const float  val);
    
    int getRawBits(void)const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
    
};

std::ostream& operator<<(std::ostream& o, Fixed const & f);

#endif