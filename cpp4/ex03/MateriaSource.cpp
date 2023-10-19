/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:54:03 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/19 15:27:26 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
    std::cout << "Default MateriaSource constructor called" << std::endl;
}
MateriaSource::~MateriaSource()
{
    std::cout << "Default MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource & fp)
{
    // this->type = fp.type;
    std::cout << "Copy MateriaSource constructor called" << std::endl;  
}
MateriaSource& MateriaSource::operator=(MateriaSource const & fp)
{
    // this->type = fp.type;
    return *this;
}