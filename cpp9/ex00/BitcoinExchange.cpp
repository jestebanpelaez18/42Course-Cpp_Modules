/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:12:30 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/03 16:37:13 by jpelaez-         ###   ########.fr       */
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
    while(getline(file, line))
    {
        size_t pos = line.find('|');
        if (pos != std::string::npos)
        {
            // Remove trailing spaces from the key
            std::string key = line.substr(0, pos);
            key.erase(key.find_last_not_of(" \n\r\t")+1);
            
            // Remove leading spaces from the value
            std::string value = line.substr(pos + 1);
            value.erase(0, value.find_first_not_of(" \n\r\t"));
            
            new_map.insert(std::pair<std::string,std::string>(key, value));
        }
        else
        {
            // Remove trailing spaces from the line
            line.erase(line.find_last_not_of(" \n\r\t")+1);
            new_map.insert(std::pair<std::string,std::string>(line, ""));
        }
    }
    // declare map iterator
    std::map<std::string, std::string>::iterator iter;

    // use iterator to display map elements
    for (iter = new_map.begin(); iter != new_map.end(); ++iter) {
        std::cout << iter->first << " - " << iter->second << std::endl; }
    file.close();
}

