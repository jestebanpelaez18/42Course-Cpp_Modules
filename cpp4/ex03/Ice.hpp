/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:36:01 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/18 16:39:53 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria
{   
    public:
    Ice();
    Ice(std::string const & type);
    ~Ice();
    Ice& operator=(Ice const & fp);
    Ice(const Ice & fp);
    std::string const & getType() const;
    // virtual Ice* clone() const = 0;
    // virtual void use(ICharacter& target);
};

#endif