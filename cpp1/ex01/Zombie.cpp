/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:23 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/10 14:38:16 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
    
}
Zombie::~Zombie()
{
    std::cout << this->name << " Destroyed" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::get_name(std::string name)
{
    this->name = name;
}