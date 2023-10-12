/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:43:48 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/12 17:28:42 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std:: string name)
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
    this->name = name;
    this->Hit_points =  10;
    this->Energy_points =  10;
    this->Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & fp)
{
    *this = fp;
    std::cout << "Copy ClapTrap constructor called" << std::endl;  
}
ClapTrap& ClapTrap::operator=(ClapTrap const & fp)
{
    this->name = fp.name;
    this->Attack_damage = fp.Attack_damage;
    this->Energy_points = fp.Energy_points;
    this->Hit_points = fp.Hit_points;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(Hit_points <= 0)
    {
        std::cout << name << " can not attack, is dead" << std::endl;
        return ;
    }
    else if(Energy_points <= 0)
    {
        std::cout << name << " can not attack, is without Energy" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage !" << std::endl;
    Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points <= 0)
    {
        std::cout << name << " is dead" << std::endl;
        return;
    }
    std::cout << name << " takes " << amount << " of damage" << std::endl;
    Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(Hit_points <= 0)
    {
        std::cout << name << " can not reapired, is dead" << std::endl;
        return ;
    }
    else if(Energy_points == 0)
    {
        std::cout << name << " can not attack, is without Energy" << std::endl;
        return ;
    }
    std::cout << name << " has recovered with " << amount << " hit points back" << std::endl;
    Hit_points += amount;
    Energy_points--;
}