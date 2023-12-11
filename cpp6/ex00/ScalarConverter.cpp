/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:48:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/11 16:21:54 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    
}

ScalarConverter::~ScalarConverter()
{
    
}

ScalarConverter::ScalarConverter(const ScalarConverter & fp)
{
    *this = fp;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const & fp)
{
    return *this;
}

int ScalarConverter::is_int(std::string value)
{
    int i = 0;
while(value[i])
{
    
}
}
void ScalarConverter::convert(std::string value)
{
    ScalarConverter Conv;
    if(Conv.is_int(value))
    {
        
    }
}