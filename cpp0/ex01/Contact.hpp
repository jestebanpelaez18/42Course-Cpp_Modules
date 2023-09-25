/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:06:05 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/25 17:12:57 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
    public:
    std:: string name;
    std:: string last_name;
    std:: string nick_name;
    std:: string phone_number;
    std:: string darkest_secret;
    std:: time_t timestamp;
};


#endif