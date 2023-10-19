/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:57:19 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/19 15:29:37 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

    private:

    AMateria* Materias[4];
    
    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource& operator=(MateriaSource const & fp);
    MateriaSource(const MateriaSource & fp);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif