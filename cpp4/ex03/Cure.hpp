/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:32:29 by jpelaez-          #+#    #+#             */
/*   Updated: 2023/10/18 16:43:41 by jpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public Amateria
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