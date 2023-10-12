/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:43:12 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/12 17:26:51 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap Clap("Teemu");
    ScavTrap Scav("Jun");
    
    Clap.attack("Rasmus");
    Clap.attack("Rasmus");
    Clap.takeDamage(9);
    Clap.beRepaired(3);
    Clap.takeDamage(6);
    Clap.attack("Jun");
    Scav.attack("Teemu");
    Scav.takeDamage(50);
    Scav.beRepaired(4);
    Scav.attack("Teemu");
    Scav.takeDamage(54);
    Scav.attack("Rasmus");
    Scav.beRepaired(4);
    
    return(0);
}