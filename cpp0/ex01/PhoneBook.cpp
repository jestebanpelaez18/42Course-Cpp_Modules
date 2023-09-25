/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:05:02 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/21 22:28:51 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::firts_message()
{
    std::cout << "-------My Awesome PhoneBook-------" << std:: endl;
    std::cout << "Choose a command:" << std:: endl;
    std::cout << "1.ADD - 2.SEARCH - 3.EXIT";
}

void PhoneBook::check_size(std::string str)
{
    std::cout << "|" << std::setw(10);
    if(str.size() > 10)
    {
        str.resize(9);
        std::cout << str << ".";
    }
    else 
        std:: cout << str;
}

void PhoneBook::print_contact_list()
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
        check_size(Book.contacts[i].name);
        check_size(Book.contacts[i].last_name);
        check_size(Book.contacts[i].nick_name);
    }
}

void PhoneBook::check_number_contacts(void)
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
        if(line == "Yes" || line == "yes")
        {
            Book.contacts->index = 0;
            Book.phonebook_add(Book.contacts->index = 0);
        }
        else
            return;
    }
}

void PhoneBook::search_contact_info(int index)
{
    PhoneBook Book;
    
    if(index < 8 || index < 0)
    {
        std::cout << Book.contacts[index].name << std::endl;
        std::cout << Book.contacts[index].last_name << std::endl;
        std::cout << Book.contacts[index].nick_name << std::endl;
        std::cout << Book.contacts[index].phone_number << std::endl;
        std::cout << Book.contacts[index].darkest_secret << std::endl;
    }
    else if(index > 7)
    {
        std::cout << "Error, invalid index" << std::endl;
        std::cout << "Select a index between 1 and 7" << std::endl;
        std::cin  >> index;
        Book.search_contact_info(index);
        return ;
    }
}


void PhoneBook::phonebook_add(int i)
{
    PhoneBook Book;
    
    if(Book.num_contacs == 8)
        i = 0;
    std::cout << "Introduce the name";
    std::getline(std::cin,Book.contacts[i].name);
    std::cout << "Introduce the last name";
    std::getline(std::cin,Book.contacts[i].last_name);
    std::cout << "Introduce a nick name";
    std::getline(std::cin,Book.contacts[i].nick_name);
    std::cout << "Introduce a phone number";
    std::getline(std::cin,Book.contacts[i].phone_number);
    std::cout << "Introduce a Dark secret";
    std::getline(std::cin,Book.contacts[i].darkest_secret);  
    Book.contacts->index++;
}