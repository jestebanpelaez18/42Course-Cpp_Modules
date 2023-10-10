/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:12:04 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/10 14:20:44 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std:: string name;
    Zombie *name2;
    
    std::cout << "Now we dinamically allocate the memory" << std::endl;
    std::cout << "can you give a new name" << std::endl;
    std::cin >> name;
    name2 = newZombie(name);
    name2->announce();
    delete name2;

    std::cout << "Now we do the same, no memory allocation" << std::endl;
    std::cout << "can you give a new name" << std::endl;
    std::cin >> name;

    randomChump(name);
    return(0);
}