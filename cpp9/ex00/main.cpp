/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:11:56 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/02 18:03:32 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        std::cout << "Error: Could not open file" << std::endl;
        return (1);
    }

    BitcoinExchange btc;

    btc.read_input(argv[1]);
    return(0);
}