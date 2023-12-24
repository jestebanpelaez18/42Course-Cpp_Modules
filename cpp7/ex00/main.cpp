/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:01:54 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/19 18:05:58 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
    int a = 2;
    int b = 3;

    swap(a,b);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << "The min is : " << min(a,b) << std::endl;
    std::cout << "The max is : " << max(a,b) << std::endl;
    
    std::string s1 = "chaine1";
    std::string s2 = "chaine2";
    
    swap(s1,s2);
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << "The min is : " << min(s1,s2) << std::endl;
    std::cout << "The max is : " << max(s1,s2) << std::endl;
}