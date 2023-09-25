/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:25:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/25 17:14:20 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std:: string Input;
    PhoneBook Book;
    int i;
    int index;

    Book.num_contacs = 0;
    Book.status = true;
    i = 0;
    index = 0;
    Book.firts_message();
    while(1)
    {
        std::getline(std::cin, Input);
        if(Input == "ADD" || Input == "1")
        {
            Book.check_number_contacts();
            Book.phonebook_add(i);
            Book.firts_message();
        }
        else if (Input == "SEARCH" || Input == "2")
        {
            Book.print_contact_list();
            Book.firts_message();
        }
        else if(Input == "EXIT" || Input == "3")
            exit(0);
    }
}