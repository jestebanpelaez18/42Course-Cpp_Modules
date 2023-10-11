/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:43:43 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/11 17:39:28 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
    std:: string name;
    int Hit_points;
    int Energy_points;
    int Attack_damage;
    
    public:
    
    ClapTrap(std:: string name);
    ~ClapTrap();
    ClapTrap& operator=(ClapTrap const & fp);
    ClapTrap(const ClapTrap & fp);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif