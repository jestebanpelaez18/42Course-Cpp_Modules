/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:25:55 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/20 18:57:08 by jpelaez-         ###   ########.fr       */
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

    Book.firts_message();
    Book.num_contacs = 0;
    Cont.index = 0;
    while(1)
    {
        std::getline(std::cin, Input);
        if(Input == "ADD")
        {
            i = Cont.index;
            Book.phonebook_add(i);                              
            Book.check_number_contacts();
        }
        else if (Input == "SEARCH")
        {
            Book.print_contact_list();
            std::cout << "Which contact info do you want to see?";
            std::cout << "Select a index between 1 and 7";
            std::cin  >> index;
            Book.search_contact_info(index);
        }
        if(Input == "EXIT")
            break ;   
    }
}