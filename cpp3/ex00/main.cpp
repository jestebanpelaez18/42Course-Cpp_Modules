/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:43:12 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/11 16:52:40 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Clap("Teemu");
    
    Clap.takeDamage(3);
    Clap.attack("Rasmus");
    Clap.beRepaired(4);
    
    return(0);
}