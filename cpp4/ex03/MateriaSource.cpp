/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:54:03 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/20 15:51:04 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        Materias[i] = NULL;
    }
    std::cout << "Default MateriaSource constructor called" << std::endl;
}
MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        delete Materias[i];
    }
    std::cout << "Default MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource & fp)
{
    for(int i = 0; i < 4; i++)
        Materias[i] = fp.Materias[i];
    std::cout << "Copy MateriaSource constructor called" << std::endl;  
}
MateriaSource& MateriaSource::operator=(MateriaSource const & fp)
{
    for(int i = 0; i < 4; i++)
        Materias[i] = fp.Materias[i];
    return *this;
}

void MateriaSource::learnMateria(AMateria * m)
{
    for(int i = 0; i  < 4; i++)
    {
        if(Materias[i] == NULL)
            Materias[i] = m;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if(Materias[i] && Materias[i]->getType() == type)
            return Materias[i];
    }
    return NULL;
}