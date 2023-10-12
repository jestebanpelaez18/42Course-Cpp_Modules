/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:10:37 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/12 17:06:31 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap: public ClapTrap
{   
    
    public:
    ScavTrap();
    ScavTrap(std:: string name);
    ~ScavTrap();
    ScavTrap& operator=(ScavTrap const & fp);
    ScavTrap(const ScavTrap & fp);
    void attack(const std::string& target);
    void guardGate();
};

#endif