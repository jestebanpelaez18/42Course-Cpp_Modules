/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:54:24 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/09/28 17:17:33 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int number;
    std:: string name;
    Zombie *zombies;
    
    number = 0;
    std::cout << "Lets create our Zombie Horde" << std::endl;
    std::cout << "Define a number of Zombies: ";
    std::cin >> number;
    std::cout << std::endl << "Give a name for the horde: ";
    std::cin >> name;

    zombies = zombieHorde(number, name);
    for (int i = 0; i < number; i++)
        zombies[i].announce();

    delete [] zombies;
    return(0);
}
