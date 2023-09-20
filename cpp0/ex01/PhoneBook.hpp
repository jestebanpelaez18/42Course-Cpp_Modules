/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:41:56 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/20 18:57:30 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    public:
    Contact contacts[8];
    int num_contacs;
    void firts_message(void);    
    void print_contact_list(void);
    void check_number_contacts(void);
    void search_contact_info(int index); 
    void phonebook_add(int i);
};

#endif