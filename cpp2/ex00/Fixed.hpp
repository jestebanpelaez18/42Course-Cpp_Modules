/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:23:07 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/05 19:07:15 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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
    int getRawBits(void)const;
    void setRawBits(int const raw);
    
};

#endif