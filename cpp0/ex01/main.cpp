/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:25:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/18 19:49:45 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    std:: string Input;
    PhoneBook Book;
    int i;

    Book.firts_message();
    while(1)
    {
        std::getline(std::cin, Input);
        if(Input == "ADD")
        {
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
            Book.check_number_contacts();
        }
        else if (Input == "SEARCH")
        {
            Book.print_contact_list();
        }
        if(Input == "EXIT")
            break ;   
    }
}