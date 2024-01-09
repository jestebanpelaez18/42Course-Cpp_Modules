/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:42:34 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/09 17:39:59 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}
RPN::~RPN()
{
    
}

RPN::RPN(const RPN & fp)
{

}


RPN& RPN::operator=(RPN const & fp)
{
    return *this;
}

int RPN::sum(int x, int y)
{
    return (x + y);
}

int RPN::substrac(int x, int y)
{
    return (x - y);
}

int RPN::multiplication(int x, int y)
{
    return (x * y);
}

int RPN::division(int x, int y)
{
    if (y = 0)
        throw std::invalid_argument("Division by 0");
    return (x / y);
}

bool RPN::is_operant(char c)
{
    std::string charset = "/*-+";
    
    if (charset.find(c) != std::string::npos)
        return true;
    return false;
}
void RPN::read_input(std::string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if(std::isspace(input[i]))
            continue;
        else if(std::isdigit(input[i]))
        {
            
        }
        
    }
    
}