/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:49:19 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/11 16:17:25 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>
#include <exception>
#include <stdio.h>

class ScalarConverter
{
    private:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter& operator=(ScalarConverter const & fp);
    ScalarConverter(const ScalarConverter & fp);
    
    public:
    static void convert(std::string value);
    int is_int(std::string value);
};

#endif