/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:12:33 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/03 15:40:08 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include <map>

class BitcoinExchange
{
    private:
    std:: ifstream file;
    std::map<std::string,std::string> new_map;
    
    public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange& operator=(BitcoinExchange const & fp);
    BitcoinExchange(const BitcoinExchange & fp);
    void read_input(std::string name_file);
};

#endif