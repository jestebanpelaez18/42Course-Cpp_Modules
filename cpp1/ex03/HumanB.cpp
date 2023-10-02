/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:25:10 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/02 16:43:16 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std:: string name)
{
    this->name = name;
}
void HumanB::setWeapon(Weapon& new_weapon)
{
    weapon = &new_weapon;
}

void HumanB::attack()
{
    if(weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else 
        std::cout << name << " attacks with their " << std::endl;
}