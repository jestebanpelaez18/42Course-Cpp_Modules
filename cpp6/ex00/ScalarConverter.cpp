/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:48:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/01 19:34:01 by jpelaez-         ###   ########.fr       */
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

/*Printers*/

void ScalarConverter::print_int() const
{
    if(!parameter.compare("nan") || !parameter.compare("-inf")  || !parameter.compare("+inf")  || !parameter.compare("-inff")
    || !parameter.compare("+inff") || !parameter.compare("nanf"))
            std::cout << "is Impossible" << std:: endl;
    else if (isImposible == true || isImposiblef == true) 
        std::cout << "is Impossible" << std:: endl;
    else 
        std::cout << n << std::endl;
}

void ScalarConverter::print_char() const
{
    if(!parameter.compare("nan") || !parameter.compare("-inf")  || !parameter.compare("+inf")  || !parameter.compare("-inff")
    || !parameter.compare("+inff") || !parameter.compare("nanf"))
        std::cout << "is Impossible" << std:: endl;
    else if(!std::isprint(n) || isImposible == true)
        std::cout << "Non displayable" << std::endl;
    else 
        std::cout << c << std::endl;
}

void ScalarConverter::print_float() const
{
    if( !parameter.compare("-inff") || !parameter.compare("+inff") || !parameter.compare("nanf"))
            std::cout << parameter << std:: endl;
    else if (!parameter.compare("nan") || !parameter.compare("-inf")  || !parameter.compare("+inf"))
        std::cout << parameter << "f" << std:: endl;
    else if(isImposiblef == true)
        std::cout << "is Impossible" << std:: endl;
    else 
    {
        if((type == INT || type == CHAR) && parameter.length() < 7)
            std::cout << f << ".0f" << std::endl;
        else
            std::cout << f << 'f' << std::endl;
    }
}

void ScalarConverter::print_double() const
{
    if(!parameter.compare("-inff") || !parameter.compare("-inf"))
        std::cout << "-inf" << std:: endl;
    else if(!parameter.compare("nan") || !parameter.compare("nanf"))
        std::cout << "nan" << std::endl;
    else if(!parameter.compare("+inf")  || !parameter.compare("+inff"))
        std::cout << "+inf" << std::endl;
    else if(isImposiblef == true)
        std::cout << "is Impossible" << std:: endl;
    else 
    {
        if((type == INT || type == CHAR) && parameter.length() < 7)
            std::cout << d << ".0" << std::endl;
        else
            std::cout << d << std::endl;
    }
}
/*Setters*/

void ScalarConverter::set_int(std::string value)
{
    int newInt = std::stoi(value);

    c = static_cast<char>(newInt);
    n = newInt;
    f = static_cast<float>(newInt);
    d = static_cast<double>(newInt);
}

void ScalarConverter::set_char(char value)
{
    c = value;
    n = static_cast<int>(value);
    f = static_cast<float>(value);
    d = static_cast<double>(value);
}

void ScalarConverter::set_float(std::string value)
{
    float newFloat = std::stof(value);

    c = static_cast<char>(newFloat);
    n = static_cast<int>(newFloat);
    f = newFloat;
    d = static_cast<double>(newFloat);
}

void ScalarConverter::set_double(std::string value)
{
    float newDouble = std::stod(value);

    c = static_cast<char>(newDouble);
    n = static_cast<int>(newDouble);
    f = static_cast<float>(newDouble);
    d = newDouble;
}
/*identificators*/

bool ScalarConverter::is_int(std::string value)
{
    int i = 0;
    int sing = 1;
    int long result = 0;
    while(std::isspace(value[i]))
        i++;
    if(value[i] == '-' || value[i] == '+')
    {
		if (value[i] == '-')
			sing = -1;
        i++;
    }
    for(int j = i; j < value.length(); j++)
    {
        if(!std::isdigit(value[j]))
            return false;
        result = result * 10 + (value[j] - '0');
		if (result > 2147483648 && sing == -1)
        {
            isImposible = true;
			return false;
        }
        else if (result > 2147483647 && sing == 1)
        {
            isImposible = true;
			return false;       
        }
    }
    return true;
    
}

bool ScalarConverter::is_float(std::string value)
{
    if(value.find('.') == std::string::npos || value.back() != 'f')
        return false; 
    if(value.find('.') == value.length() - 2  || value.find('.') == 0)
    {
        isImposiblef = true;
        return false;
    }
    int i = 0;
    int sing = 1;
    int dot = 0;
    int f = 0;
    while(std::isspace(value[i]))
        i++;
    if(value[i] == '-' || value[i] == '+')
    {
		if (value[i] == '-')
			sing = -1;
        i++;
    }
    for(int j = i; j < value.length() - 1; j++)
    {
        if(!std::isdigit(value[j]) && value[j] != '.')
        {
            isImposiblef = true;
            return false;
        }
        if(value[j] == '.')
            dot++;
        if(value[j] == 'f')
            f++;
    }
    if(f != 0 || dot > 1)
    {
        isImposiblef = true;
        return false;
    }
    return true;
}

bool ScalarConverter::is_double(std::string value)
{
    if(value.find('.') == std::string::npos)
        return false; 
    if(value.find('.') == value.length() - 1  || value.find('.') == 0)
    {
        isImposiblef = true;
        return false;
    }
    int i = 0;
    int sing = 1;
    int dot = 0;
    int f = 0;
    while(std::isspace(value[i]))
        i++;
    if(value[i] == '-' || value[i] == '+')
    {
		if (value[i] == '-')
			sing = -1;
        i++;
    }
    for(int j = i; j < value.length(); j++)
    {
        if(!std::isdigit(value[j]) && value[j] != '.')
        {
            isImposiblef = true;
            return false;
        }
        if(value[j] == '.')
            dot++;
    }
    if(dot > 1)
    {
        isImposiblef = true;
        return false;
    }
    return true;
}

bool ScalarConverter::is_char(std::string character)
{
    if(character.size() == 1 && std::isalpha(character[0]) && std::isprint(character[0]))
        return true;
    return false;
}

void ScalarConverter::set_type(std::string value)
{
    parameter = value;
    isImposible = false;
    isImposiblef = false;
    if(is_char(value))
        type = CHAR;
    else if(is_int(value))
        type = INT;
    else if(is_float(value))
        type = FLOAT;
    else if(is_double(value))
        type = DOUBLE;
}
void ScalarConverter::convert(std::string value)
{
    ScalarConverter Scalar;
    Scalar.isImposible = false;
    Scalar.isImposiblef = false;
    Scalar.set_type(value);
    switch(Scalar.type)
    {
    case CHAR:
        Scalar.set_char(value[0]);
        break;
    case INT:
        Scalar.set_int(value);
        break;
    case FLOAT:
        Scalar.set_float(value);
        break;
    case DOUBLE:
        Scalar.set_double(value);
    default:
        break;
    }
    std::cout << Scalar;
    Scalar.isImposible = false;
    Scalar.isImposiblef = false;
 }

std::ostream& operator<<(std::ostream& o, ScalarConverter const & f)
{
    o << "char   : ";
    f.print_char();
    o << "int    : ";
    f.print_int();
    o << "float  : ";
    f.print_float();
    o << "double : ";
    f.print_double();
    return o;
}