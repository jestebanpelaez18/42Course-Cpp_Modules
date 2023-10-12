/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:43:12 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/12 17:47:48 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap Clap("Teemu");
    // ScavTrap Scav("Jun");
    FragTrap Frag("Ramus");
    
    Clap.attack("Rasmus");
    Clap.attack("Rasmus");
    Clap.takeDamage(9);
    Clap.beRepaired(3);
    Clap.takeDamage(6);
    Clap.attack("Jun");
    // Scav.attack("Teemu");
    // Scav.takeDamage(50);
    // Scav.beRepaired(4);
    // Scav.attack("Teemu");
    // Scav.takeDamage(54);
    // Scav.attack("Rasmus");
    // Scav.beRepaired(4);
    Frag.attack("Teemu");
    Frag.takeDamage(50);
    Frag.beRepaired(4);
    Frag.attack("Teemu");
    Frag.takeDamage(54);
    Frag.attack("Jun");
    Frag.beRepaired(4);
    Frag.highFivesGuys();
    
    return(0);
}