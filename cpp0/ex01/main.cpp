/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:25:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/25 16:05:44 by jpelaez-         ###   ########.fr       */
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
            // std::cout << i << std:: endl;
            // std::cout << Book.num_contacs << std:: endl;  
                      
        }
        else if (Input == "SEARCH" || Input == "2")
        {
            Book.print_contact_list();
        }
        else if(Input == "EXIT" || Input == "3")
            exit(0);  
    }
}