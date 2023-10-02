/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:25:16 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/02 16:21:50 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    return(Weapon::type);
}

void Weapon::setType(std::string newtype)
{
    type = newtype;
}

Weapon::Weapon(std::string weapontype)
{
    this->type =  weapontype;
}