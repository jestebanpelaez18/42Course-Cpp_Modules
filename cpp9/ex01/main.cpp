/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:42:25 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/16 17:11:12 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        std::cout << "Error: Not valid arguments" << std::endl;
        return (1);
    }
    RPN rpn;
    
    rpn.read_single_input(argv[1]);
}