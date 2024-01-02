/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:12:30 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/02 18:03:02 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    
}
BitcoinExchange::~BitcoinExchange()
{
    
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & fp)
{

}
    

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & fp)
{
    return *this;
}

void BitcoinExchange::read_input(std::string name_file)
{
    file.open(name_file,std::ios::out);
    if(!file.is_open())
    {
        std::cout << "Error trying to open the file" << std::endl;
        return ;
    }
    std::string line;
    int i = 0;
    while(getline(file, line) && i < 10)
    {
        std::cout << line << std::endl;
        i++;
    }
    file.close();
}

