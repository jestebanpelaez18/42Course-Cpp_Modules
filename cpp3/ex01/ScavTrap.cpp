/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:10:25 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/11 17:58:23 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std:: string name) : ClapTrap(name)
{
    std::cout << "Default ScavTrap constructor called" << std::endl;
    this->name = name;
    this->Hit_points =  100;
    this->Energy_points =  50;
    this->Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Default ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & fp)
{
    *this = fp;
    std::cout << "Copy constructor called" << std::endl;  
}
ScavTrap& ScavTrap::operator=(ScavTrap const & fp)
{
    this->name = fp.name;
    this->Attack_damage = fp.Attack_damage;
    this->Energy_points = fp.Energy_points;
    this->Hit_points = fp.Hit_points;
    return *this;
}

