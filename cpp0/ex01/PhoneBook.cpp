/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:05:02 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/18 19:49:39 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void firts_message()
{
    std::cout << "-------My Awesome PhoneBook-------" << std:: endl;
    std::cout << "Choose a command:" << std:: endl;
    std::cout << "1.ADD - 2.SEARCH - 3.EXIT";
}

void print_contact_list()
{
    PhoneBook Book;
    
    std::cout << "\n|";
    std::cout << std::setw(10) << "INDEX";
    std::cout << "|" << std::setw(10) << "FIRTS NAME";
    std::cout << "|" << std::setw(10) << "LAST NAME";
    std::cout << "|" << std::setw(10) << "NICK NAME";
    std::cout << "|";
    for(int i=0; i < 8; i++)
    {
        std::cout << "|" << std::setw(10) << Book.contacts[i].name;
        std::cout << "|" << std::setw(10) << Book.contacts[i].last_name;
        std::cout << "|" << std::setw(10) << Book.contacts[i].nick_name;
    }
}

void check_number_contacts(void)
{
    PhoneBook Book;
    std:: string line;

    if(Book.num_contacs < 8)
        Book.num_contacs++;
    else
    {
        std::cout << "The contact list is full" << std::endl;
        std::cout << "If you want to add more contacts type 'Yes', in other case type 'No'" << std::endl;
        std::getline(std::cin,line);
        if(line == "Yes" | line == "yes")
        {
            //do stuff
        }
        else
            return;
    }
}