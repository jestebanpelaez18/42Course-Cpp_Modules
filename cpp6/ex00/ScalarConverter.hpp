/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:49:19 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/28 19:21:52 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>
#include <exception>
#include <stdio.h>
#include <ctype.h>
#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3

class ScalarConverter
{
    private:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter& operator=(ScalarConverter const & fp);
    ScalarConverter(const ScalarConverter & fp);
    
    int type;
    bool isImposible;
    char c;
    int n;
    float f;
    double d;
    
    public:
    void convert(std::string &value);
    bool is_int(std::string value);
    void set_type(std::string &value);
    bool is_char(std::string &value);
    void set_char(char value);
    void print_char();
    void set_int(std::string &value);
     void print_int();
};

std::ostream& operator<<(std::ostream& o, ScalarConverter const & f);
#endif