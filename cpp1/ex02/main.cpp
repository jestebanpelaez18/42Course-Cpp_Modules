/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:42:47 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/28 18:56:58 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std:: string str;

    str = "HI THIS IS BRAIN";

    std::string *stringPTR;

    stringPTR = &str;
    
    std::string &stringREF = str;

    std::cout << "Memory addres of str is: " << &str << std::endl;
    std::cout << "Memory addres of strPTR is: " << stringPTR << std::endl;
    std::cout << "Memory addres of strREF is: " << &stringREF << std::endl;

    std::cout << "the value of the str is: " << str << std::endl;
    std::cout << "the value of the strPTR is: " << *stringPTR << std::endl;
    std::cout << "the value of the strREF is: " << stringREF << std::endl;
}