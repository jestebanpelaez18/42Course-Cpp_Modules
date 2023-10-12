/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:33:30 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/12 17:48:42 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std:: string name)
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    this->name = name;
    this->Hit_points =  100;
    this->Energy_points =  100;
    this->Attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Default FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & fp)
{
    *this = fp;
    std::cout << "Copy FragTrap constructor called" << std::endl;  
}
FragTrap& FragTrap::operator=(FragTrap const & fp)
{
    this->name = fp.name;
    this->Attack_damage = fp.Attack_damage;
    this->Energy_points = fp.Energy_points;
    this->Hit_points = fp.Hit_points;
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if(Hit_points <= 0)
    {
        std::cout << name << " can not attack, is dead" << std::endl;
        return ;
    }
    else if(Energy_points == 0)
    {
        std::cout << name << " can not attack, is without Energy" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage !" << std::endl;
    Energy_points--;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " give me Five" << std::endl;   
}