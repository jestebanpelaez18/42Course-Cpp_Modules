/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:42:46 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/08 18:16:21 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include <stack>

class RPN
{
    private:
    
    public:
    RPN();
    ~RPN();
    RPN& operator=(RPN const & fp);
    RPN(const RPN & fp);
    int sum(int x, int y);
    int substrac(int x, int y);
    int division(int x, int y);
    int multiplication(int x, int y);
};

#endif