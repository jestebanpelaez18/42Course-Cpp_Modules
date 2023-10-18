/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:57:19 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/18 18:00:18 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
    MateriaSource();
    MateriaSource(std::string const & type);
    ~MateriaSource();
    MateriaSource& operator=(MateriaSource const & fp);
    MateriaSource(const MateriaSource & fp);
    ~IMateriaSource() {}
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif