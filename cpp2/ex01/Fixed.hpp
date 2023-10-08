/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:23:07 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/08 14:11:40 by jpelaez-         ###   ########.fr       */
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
    
};

#endif