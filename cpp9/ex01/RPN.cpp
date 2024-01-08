/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:42:34 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/08 18:16:04 by jpelaez-         ###   ########.fr       */
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