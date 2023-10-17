/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:24:23 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/17 18:28:33 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#define SIZE 4

class AMateria
{   
    protected:

    std::string type;
    
    public:
    AMateria();
    AMateria(std::string const & type);
    ~AMateria();
    AMateria& operator=(AMateria const & fp):
    AMateria(const AMateria & fp);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif