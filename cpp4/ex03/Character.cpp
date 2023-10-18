/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:49:40 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/18 17:52:19 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "Default Character constructor called" << std::endl;
}
Character::~Character()
{
    std::cout << "Default Character destructor called" << std::endl;
}

Character::Character(const Character & fp)
{
    // this->type = fp.type;
    std::cout << "Copy Character constructor called" << std::endl;  
}
Character& Character::operator=(Character const & fp)
{
    // this->type = fp.type;
    return *this;
}