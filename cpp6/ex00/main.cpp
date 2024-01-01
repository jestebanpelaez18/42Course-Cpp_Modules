/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:48:41 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/29 18:45:42 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cerr << "Invalid Arguments" << std::endl;
        return 1;
    }
    ScalarConverter::convert(argv[1]);

    return 0;
    
}