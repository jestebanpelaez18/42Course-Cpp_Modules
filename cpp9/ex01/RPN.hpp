/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:42:46 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/16 17:11:19 by jpelaez-         ###   ########.fr       */
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
    std::stack<int> operation;
    
    public:
    RPN();
    ~RPN();
    RPN& operator=(RPN const & fp);
    RPN(const RPN & fp);
    int sum(int x, int y);
    int substrac(int x, int y);
    int division(int x, int y);
    int multiplication(int x, int y);
    bool is_operant(char c);
    void read_single_input(std::string input);
    void select_operation(char input, int a, int b);

};

#endif