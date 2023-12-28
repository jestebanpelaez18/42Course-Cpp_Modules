/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:48:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/28 19:25:22 by jpelaez-         ###   ########.fr       */
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

void ScalarConverter::print_int()
{
    
}

void ScalarConverter::print_char()
{
    if(!std::isprint(c))
        std::cout << "Non displayable" << std::endl;
    else if()
}

/*Setters*/

void ScalarConverter::set_int(std::string &value)
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
void ScalarConverter::set_type(std::string &value)
{
    if(is_char(value))
        type = CHAR;
    else if(is_int(value))
        type = INT;
    
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
        result = result * 10 + (value[i] - '0');
		if (result > 2147483648 && sing == -1)
        {
            isImposible = true;
			return false;
        }
        else if (result > 2147483647 && sing == 1)
        {
            isImposible = true;
			return (-1);       
        }
    }
    return true;
    
}

bool ScalarConverter::is_char(std::string &character)
{
    if(character.size() == 1 && !std::isdigit(character[0]) && std::isprint(character[0]))
        return true;
    return false;
}

void ScalarConverter::convert(std::string &value)
{
    set_type(value);
    switch(type)
    {
    case CHAR:
        set_char(value[0]);
        break;
    // case INT:
    //     print_int(value[0]);
    default:
        break;
    }
    
}

std::ostream& operator<<(std::ostream& o, ScalarConverter const & f)
{
    o << "char : " << f.print_char();
    o << "int  : " << f.print_int();
    return o;
}