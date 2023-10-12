/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:33:49 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/12 17:39:37 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class FragTrap: public ClapTrap
{   
    
    public:
    FragTrap();
    FragTrap(std:: string name);
    ~FragTrap();
    FragTrap& operator=(FragTrap const & fp);
    FragTrap(const FragTrap & fp);
    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif