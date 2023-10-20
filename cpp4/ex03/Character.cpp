/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:49:40 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/20 16:09:11 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    for(int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
    std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(std::string name)
{
    
    this->name = name;
    for(int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
    std::cout << name << " character constructor called" << std::endl;
}
Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        delete inventory[i];
    }
    std::cout << "Default Character destructor called" << std::endl;
}

Character::Character(const Character & fp)
{
    this->name = fp.name;
    for(int i = 0; i < 4; i++)
    {
        delete inventory[i];
        inventory[i] = fp.inventory[i];
    }
    std::cout << "Copy Character constructor called" << std::endl;  
}
Character& Character::operator=(Character const & fp)
{
    this->name = fp.name;
    return *this;
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if(inventory[i] == NULL)
            inventory[i] = m;
    }
    std::cout << "equip fuction called" << std::endl;
}

void Character::unequip(int idx)
{
    if(inventory[idx] != NULL)
    {
       delete inventory[idx];
       inventory[idx] = NULL;
    }
    return ;
}

void Character::use(int idx, ICharacter& target)
{
    inventory[idx]->use(target);
}