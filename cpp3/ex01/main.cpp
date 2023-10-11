/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:43:12 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/11 17:06:20 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Clap("Teemu");
    
    Clap.attack("Rasmus");
    Clap.takeDamage(3);
    Clap.beRepaired(4);
    
    return(0);
}