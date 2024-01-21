/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:42:34 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/16 17:11:49 by jpelaez-         ###   ########.fr       */
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
    *this = fp;
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
    if (y == 0)
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

void RPN::select_operation(char input, int a, int b)
{
    if (input == '+')
        operation.push(sum(a,b));
    else if(input == '-')
        operation.push(substrac(a, b));
    else if(input == '*')
        operation.push(multiplication(a, b));
    else
        operation.push(division(a, b));
    
}

void RPN::read_single_input(std::string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if(std::isspace(input[i]))
            continue;
        else if(std::isdigit(input[i]))
        {
            int operand = input[i] - 48;
            operation.push(operand);
        }
        else if(is_operant(input[i]) && operation.size() >= 2)
        {
            int b = operation.top();
            operation.pop();
            int a = operation.top();
            operation.pop();
            select_operation(input[i], a, b);   
        }
        else
        {
            std::cout << "Invalid input" << std::endl;
            return ;
        }
    }
    if(operation.size() == 1)
    {
        std::cout << operation.top() << std::endl;
        operation.pop();
    }
    else
        throw std::invalid_argument("Invalid operation");
}
