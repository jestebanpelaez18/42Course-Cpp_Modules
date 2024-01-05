/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:49:19 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/05 16:57:14 by jpelaez-         ###   ########.fr       */
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
#define IMPOSSIBLE 4

class ScalarConverter
{
    private:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter& operator=(ScalarConverter const & fp);
    ScalarConverter(const ScalarConverter & fp);
    
    int type;
    std:: string parameter;
    bool isImposiblef;
    bool overflow;
    bool is_string;
    char c;
    int n;
    float f;
    double d;
    
    public:
    static void convert(std::string value);
    bool is_int(std::string value);
    void set_type(std::string value);
    bool is_char(std::string value);
    bool is_float(std::string value);
    bool is_double(std::string value);
    void set_char(char value);
    void print_char() const;
    void set_int(std::string value);
    void print_int() const;
    void set_float(std::string value);
    void print_float() const;
    void set_double(std::string value);
    void print_double() const;

};

std::ostream& operator<<(std::ostream& o, ScalarConverter const & f);
#endif