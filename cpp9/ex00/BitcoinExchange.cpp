/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:12:30 by jpelaez-          #+#    #+#             */
/*   Updated: 2024/01/22 18:14:49 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream file;
    file.open("data.csv");
    if(!file.is_open())
    {
        std::cout << "Error trying to open the file" << std::endl;
        return ;
    }
    std::string line;
    getline(file,line);
    size_t pos = 0;
    std::string key;
    std::string value;
    while(getline(file,line))
    {
        pos = line.find(',');
        key = line.substr(0,pos);
        value = line.substr(pos + 1, line.length());
        info[key] = value;
    }
    // std::map<std::string, std::string>::iterator iter;
    // for (iter = info.begin(); iter != info.end(); ++iter) {
    //     std::cout << iter->first << " - " << iter->second << std::endl; }
    file.close();
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


bool BitcoinExchange::check_days_month(int month, int day)
{
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for(int i = 0; i <= 12; i++)
    {
        if(i == month)
        {
            if(day > days[i - 1])
                return false; 
        }
    }
    return true;
}
bool BitcoinExchange::check_days_month_leap_year(int month, int day)
{
    int days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

    for(int i = 0; i <= 12; i++)
    {
        if(i == month)
        {
            if(day > days[i - 1])
                return false; 
        }
    }
    return true;
}

bool BitcoinExchange::is_leap_year(int year)
{
    int leap_year[3] = {2012,2016,2020};

    for(int i = 0; i < 3; i++)
    {
        if(leap_year[i] == year)
            return true;
    }
    return false;
}
bool BitcoinExchange::check_btc_value(double value)
{
    if(value < 0)
    {
        std::cout << "Error: not a positive number" << std::endl;
        return false;
    }
    if(value > 1000)
    {
        std:: cout << "Error: too large number" << std:: endl;
        return false;
    }
    return true;
}

bool BitcoinExchange::check_date(std::string date)
{
    if(date.length() > 10)
    {
        std::cout << "Error: Bad input. invalid date " << " => " << date << std::endl;
        return false;
    }
    std::string temp_date = date;
    std::string year = date.substr(0,date.find('-'));
    if(year.empty())
    {
        std::cout << "Error: Bad input. invalid date " << " => " << date << std::endl;
        return false;
    }
    int int_year = stoi(year);
    if(int_year < 2009 || int_year > 2022)
    {
        std::cout << "Error: Bad input. invalid date " << " => " << date << std::endl;
        return false;
    }
    date.erase(0,date.find('-') + 1);      
    std::string month = date.substr(0,date.find('-'));
    int int_month = stoi(month);
    if(int_month < 1 || int_month > 12)
    {
        std::cout << "Error: Bad input. invalid date" << " => " << date << std::endl;
        return false;
    }
    date.erase(0,date.find('-') + 1);      
    std::string day = date.substr(0,date.find('-'));
    int int_day = stoi(day);
    if(int_day < 1 || int_day > 31)
    {
        std::cout << "Error: Bad input. invalid date" << " => " << temp_date << std::endl;
        return false;
    }
    if(is_leap_year(int_year))
    {
        if(!check_days_month_leap_year(int_month, int_day))
        {
            std::cout << "Error: Bad input. invalid date" << " => " << temp_date << std::endl;
            return false;
        }
    }
    else if(!check_days_month(int_month, int_day))
    {
        std::cout << "Error: Bad input. invalid date" << " => " << temp_date << std::endl;
        return false;
    }
    return true;
}

void BitcoinExchange::read_input(std::string name_file)
{
    std::ifstream file;
    
    file.open(name_file,std::ios::out);
    if(!file.is_open())
    {
        std::cout << "Error trying to open the file" << std::endl;
        return ;
    }
    std::string line;
    std:: string date;
    std:: string value;
    getline(file,line);
    while(getline(file, line))
    {
        size_t pos = line.find('|');
        if (pos == std::string::npos)
        {
            std::cout << "Error bad input => " << line.substr(0, line.length()) << std::endl;
            continue;
        }
        date = line.substr(0, pos);
        date.erase(date.find_last_not_of(" \n\r\t") + 1);
        value = line.substr(pos + 1, line.length());
        value.erase(0,value.find_first_not_of(" \n\r\t"));
        double btcs;
        btcs = stod(value);
        if(!check_date(date))
            continue;
        if(!check_btc_value(btcs))
            continue ;  
            
        std::map<std::string,std::string>::iterator it;
        std::string currentDate = date;
        it = info.upper_bound(date);

        if (it == info.begin())
        {
            it = info.begin();
        }
        else
        {
          --it;
        }
        std::cout << date << " => " << value << " = " << stod(it->second) * stod(value) << std::endl;
    }
    file.close();
}

