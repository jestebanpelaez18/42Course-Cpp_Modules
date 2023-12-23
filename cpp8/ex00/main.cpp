/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:13:08 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/12/23 12:08:39 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>

int main(void)
{
    std::array<int,5> numbers = {1,2,3,5,6};
    try
    {
        easyfind(numbers,2);
        easyfind(numbers,1);
        easyfind(numbers,0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}