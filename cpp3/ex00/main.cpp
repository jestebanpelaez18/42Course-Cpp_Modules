/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:43:12 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/12 17:29:42 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Clap("Teemu");
    
    Clap.attack("Rasmus");
    Clap.attack("Rasmus");
    Clap.takeDamage(9);
    Clap.beRepaired(3);
    Clap.takeDamage(6);
    Clap.attack("Jun");
    
    return(0);
}