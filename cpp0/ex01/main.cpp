/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:25:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/25 15:22:11 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    std:: string Input;
    PhoneBook Book;
    Contact Cont;
    int i;
    int index;

    Book.num_contacs = 0;
    Book.status = true;
    i = 0;
    index = 0;
    while(1)
    {
        Book.firts_message();
        std::getline(std::cin, Input);
        if(Input == "ADD" || Input == "1")
        {
            Book.check_number_contacts();
            Book.phonebook_add(i);          
        }
        else if (Input == "SEARCH" || Input == "2")
        {
            Book.print_contact_list();
            std::cout << "Which contact info do you want to see?";
            std::cout << "Select a index between 1 and 7";
            std::cin  >> index;
            Book.search_contact_info(index);
        }
        else if(Input == "EXIT" || Input == "3")
            exit(0);  
    }
}