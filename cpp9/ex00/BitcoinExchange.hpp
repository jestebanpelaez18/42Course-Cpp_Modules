/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:12:33 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/08 17:23:24 by jpelaez-         ###   ########.fr       */
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
    std::map<std::string,std::string> info;
    
    public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange& operator=(BitcoinExchange const & fp);
    BitcoinExchange(const BitcoinExchange & fp);
    void read_input(std::string name_file);
    bool check_btc_value(double value);
    bool check_date(std::string date);
    bool check_days_month(int month, int day);
};

#endif