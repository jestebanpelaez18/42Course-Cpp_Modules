/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:42:25 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/09 17:16:00 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        std::cout << "Error: Could not open file" << std::endl;
        return (1);
    }
    RPN rpn;

    rpn.read_input(argv[1]);
    return(0);
}